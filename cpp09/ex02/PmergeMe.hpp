/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:30:20 by ertiz             #+#    #+#             */
/*   Updated: 2024/07/04 12:38:07 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>

template <typename Container>
class PmergeMe {
public:
	//static void mergeInsertionSortVector(std::vector<int>& arr, int left, int right);
	static void mergeInsertionSort(Container& container);
private:
	//static void mergeVector(std::vector<int>& arr, int left, int mid, int right);
	//static void insertionSortVector(std::vector<int>& arr);
	static void insertionSort(Container& container);
	static void merge(Container& left, Container& right, Container& result);
	static int jacobsonIndex(int i);
};

#include "PmergeMe.tpp"

#endif
