/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:30:44 by ertiz             #+#    #+#             */
/*   Updated: 2024/07/04 12:45:17 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>

template <typename Container>
// Jacobson index function
int PmergeMe<Container>::jacobsonIndex(int i) {
    return std::max(0, static_cast<int>((std::pow(2, i - 1) + std::pow(-1, i)) / 3));
}

// Insertion sort for generic container using Jacobson index
template <typename Container>
void PmergeMe<Container>::insertionSort(Container& container) {
    if (container.size() <= 1)
        return;

    for (auto it = std::next(container.begin()); it != container.end(); ++it) {
        int key = *it;
        typename Container::iterator j = it;
        int idx = std::distance(container.begin(), it);
        int jacobsonIdx = jacobsonIndex(idx);
        typename Container::iterator jcb_it = container.begin();
        std::advance(jcb_it, jacobsonIdx);

        while (j != container.begin() && jcb_it != container.end() && *jcb_it > key) {
            *j = *jcb_it;
            j = jcb_it;
            idx = std::distance(container.begin(), j);
            jacobsonIdx = jacobsonIndex(idx);
            jcb_it = container.begin();
            std::advance(jcb_it, jacobsonIdx);
        }
        *j = key;
    }
}

// Merge function for generic container
template <typename Container>
void PmergeMe<Container>::merge(Container& left, Container& right, Container& result) {
    typename Container::iterator it_left = left.begin();
    typename Container::iterator it_right = right.begin();

    while (it_left != left.end() && it_right != right.end()) {
        if (*it_left <= *it_right) {
            result.push_back(*it_left);
            ++it_left;
        } else {
            result.push_back(*it_right);
            ++it_right;
        }
    }

    while (it_left != left.end()) {
        result.push_back(*it_left);
        ++it_left;
    }

    while (it_right != right.end()) {
        result.push_back(*it_right);
        ++it_right;
    }
}

// Merge-Insertion Sort for generic container
template <typename Container>
void PmergeMe<Container>::mergeInsertionSort(Container& container) {
    if (container.size() <= 1)
        return;

    Container left, right;
    typename Container::iterator it = container.begin();
    std::advance(it, container.size() / 2);

    left.insert(left.begin(), container.begin(), it);
    right.insert(right.begin(), it, container.end());

    mergeInsertionSort(left);
    mergeInsertionSort(right);

    container.clear();
    merge(left, right, container);
}
