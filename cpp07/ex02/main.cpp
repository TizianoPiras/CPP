/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:56:21 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 17:31:44 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	Array<int> arr(100);
	Array<char> arr1(15);
	Array<float> arr2(10);
	Array<double> arr3(3);
	
	Array<int> att = arr;

	try{
		for (unsigned int i = 0; i < arr.size(); ++i)
			arr[i] = i;
		for (unsigned int i = 0; i < arr1.size(); ++i)
			arr1[i] = 'c';
		for (unsigned int i = 0; i < arr2.size(); ++i)
			arr2[i] = 1.4f + i;
		for (unsigned int i = 0; i < arr3.size(); ++i)
			arr3[i] = 0.4 + i;
		for (unsigned int i = 0; i < att.size(); ++i)
			att[i] = i;

		std::cout << "size of arr: " << arr.size() << std::endl; 
		
		for (unsigned int i = 0; i < arr.size(); ++i)
			std::cout << "elem " << i << " of arr is: " << arr[i] << std::endl;
		for (unsigned int i = 0; i < att.size(); ++i)
			std::cout << "elem " << i << " of att is: " << att[i] << std::endl;
		std::cout << "size of arr1: " << arr1.size() << std::endl;
		for (unsigned int i = 0; i < arr1.size(); ++i)
			std::cout << "elem " << i << " of arr is: " << arr1[i] << std::endl;
		std::cout << "size of arr2: " << arr2.size() << std::endl; 
		for (unsigned int i = 0; i < arr2.size(); ++i)
		{
			std::cout << std::fixed << std::setprecision(1);
			std::cout << "elem " << i << " of arr is: " << arr2[i] << "f" << std::endl;
		}
		std::cout << "elem " << 100 << " of arr is: " << arr2[100] << std::endl;
		for (unsigned int i = 0; i < arr3.size(); ++i)
		{
			std::cout << std::fixed << std::setprecision(1);
			std::cout << "elem " << i << " of arr is: " << arr3[i] << std::endl;
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
