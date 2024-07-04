/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:31:04 by ertiz             #+#    #+#             */
/*   Updated: 2024/07/04 12:34:35 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>
#include <vector>
#include <list>
#include <iostream>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cerr << "Error: No input sequence provided." << std::endl;
		return 1;
	}

	std::vector<int> vec;
	std::list<int> lst;

	for (int i = 1; i < argc; ++i) {
		int num;
		std::istringstream ss(argv[i]);
		if (!(ss >> num) || num < 0) {
			std::cerr << "Error: Invalid input. Only positive integers are allowed." << std::endl;
			return 1;
		}
		vec.push_back(num);
		lst.push_back(num);
	}

	std::cout << "Before: ";
	for (int num : lst) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	clock_t startVec = clock();
	PmergeMe<std::vector<int>>::mergeInsertionSort(vec);

	clock_t endVec = clock();

	clock_t startList = clock();
	PmergeMe<std::list<int>>::mergeInsertionSort(lst);
	clock_t endList = clock();

	std::cout << "After: ";
	for (int num : lst) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " 
			  << static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC << " us" << std::endl;
	std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " 
			  << static_cast<double>(endList - startList) / CLOCKS_PER_SEC << " us" << std::endl;

	return 0;
}
