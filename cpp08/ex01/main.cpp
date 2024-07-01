/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:14:43 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/14 13:02:44 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()

{
	try
	{
		size_t	nbr = 10000;
		Span sp = Span(5);
		Span spanone = Span(10000);
		std::vector<int> vector;

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		for(size_t i = 0; i < nbr; ++i)
			vector.push_back(i);

		spanone.addNumbersPlus(vector);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << spanone.shortestSpan() << std::endl;
		std::cout << spanone.longestSpan() << std::endl;

		Span wrong(1);

		wrong.addNumber(10);
		return 0;
	}
	catch (const Span::TooMuchNumbers &e){
		std::cout << e.what() << std::endl;
	}
	catch (const Span::TooLowMembers &e){
		std::cout << e.what() << std::endl;
	}
}
