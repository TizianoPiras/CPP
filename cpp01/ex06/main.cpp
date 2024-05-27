/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:41:05 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:13:29 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl test;
	std::string input;

	if (argc == 2)
	{
		input = argv[1];
		test.complain(input);
	}
	else
	{
		std::cerr << "Invalid argument, insert only one command level at time, and be sure that is one of the following: DEBUG, INFO, WARNIGN or ERROR" << std::endl;
		return 1;
	}
	return (0);
}
