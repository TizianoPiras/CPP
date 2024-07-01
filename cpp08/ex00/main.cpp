/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:26:47 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/13 15:27:27 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfinder.hpp"

int main()
{
	int				n;
	size_t			nbr;

	std::cout << "Insert number of elements: ";
	std::cin >> nbr;
	std::vector<int> vector;
	for(size_t i = 0; i < nbr; ++i)
	{
		//int		elem;
		//std::cout << "Now insert your number: ";
		//std::cin >> elem;
		vector.push_back(i);
		std::cout << "i: " << i << " element = " << vector[i] << std::endl;
	}
	std::cout << "Insert the number that are you looking for: ";
	std::cin >> n;
	try{

		std::vector<int>::iterator	res = easyFind(vector, n);
		int							index = std::distance(vector.begin(), res);
		std::cout << "Number found :" << *res << " and it is at " << index << " position." << std::endl;
	}
	catch(NumberNotFound &e){
		std::cout << e.what() << std::endl;
	}
}
