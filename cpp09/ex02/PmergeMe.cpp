/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:30:44 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/26 15:23:23 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Insertion sort for vector
void PmergeMe::insertionSortVector(std::vector<int>& arr, int left, int right) {
	std::cout << "Insertion Sort" << std::endl;
	for (int i = left + 1; i <= right; ++i) {
		int key = arr[i];
		int j = i - 1;
		while (j >= left && arr[j] > key) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

// Merge function for vector
void PmergeMe::mergeVector(std::vector<int>& arr, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> L(n1), R(n2);

	std::cout << "Merge Sort" << std::endl;
	for (int i = 0; i < n1; ++i)
		L[i] = arr[left + i];
	for (int i = 0; i < n2; ++i)
		R[i] = arr[mid + 1 + i];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j])
			arr[k++] = L[i++];
		else
			arr[k++] = R[j++];
	}

	while (i < n1)
		arr[k++] = L[i++];

	while (j < n2)
		arr[k++] = R[j++];
}

// Merge-Insertion Sort for vector
void PmergeMe::mergeInsertionSortVector(std::vector<int>& arr, int left, int right) {
	if (left < right) {
		if (right - left + 1 <= 1)
			return ;
		if (right - left + 1 <= 66) {
			insertionSortVector(arr, left, right);
		} else {
			int mid = left + (right - left) / 2;
			mergeInsertionSortVector(arr, left, mid);
			mergeInsertionSortVector(arr, mid + 1, right);
			mergeVector(arr, left, mid, right);
		}
	}
}

// Insertion sort for list
void PmergeMe::insertionSortList(std::list<int>& lst) 
{
	for (std::list<int>::iterator it = ++lst.begin(); it != lst.end(); ++it) {
		int key = *it;
		std::list<int>::iterator j = it;
		while (j != lst.begin() && *--j > key) {
			std::list<int>::iterator next_j = ++j;
			--j;
			*next_j = *j;
		}
		*++j = key;
	}
}

// Merge function for list
void PmergeMe::mergeList(std::list<int>& left, std::list<int>& right, std::list<int>& result) {
	std::list<int>::iterator it_left = left.begin();
	std::list<int>::iterator it_right = right.begin();

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

// Merge-Insertion Sort for list
void PmergeMe::mergeInsertionSortList(std::list<int>& lst) {
	if (lst.size() <= 1)
		return;
	if (lst.size() <= 66)
		insertionSortList(lst);
	else
	{
		std::list<int> left, right;
		std::list<int>::iterator it = lst.begin();
		for (int i = 0; i < lst.size() / 2; ++i)
			++it;

		left.splice(left.begin(), lst, lst.begin(), it);
		right.splice(right.begin(), lst, lst.begin(), lst.end());

		mergeInsertionSortList(left);
		mergeInsertionSortList(right);

		lst.clear();
		mergeList(left, right, lst);  
	}
}
