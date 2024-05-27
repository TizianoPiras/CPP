/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:22:52 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:12:34 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;
	std::string message;

	std::cout << "Please insert a level by typing: DEBUG, INFO, WARNING or ERROR: ";
	std::cin >> message;
	test.complain(message);
	return (0);
}
