/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:30:20 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/26 15:01:57 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>

class PmergeMe {
public:
	static void mergeInsertionSortVector(std::vector<int>& arr, int left, int right);
	static void mergeInsertionSortList(std::list<int>& lst);
	//static void fordJohnsonSortVector(std::vector<int>& arr);
	//static void fordJohnsonSortList(std::list<int>& arr);
private:
	static void mergeVector(std::vector<int>& arr, int left, int mid, int right);
	static void insertionSortVector(std::vector<int>& arr, int left, int right);
	
	static void insertionSortList(std::list<int>& lst);
	static void mergeList(std::list<int>& left, std::list<int>& right, std::list<int>& result);
};

#endif
