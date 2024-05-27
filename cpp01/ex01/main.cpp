/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:19:53 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:05:46 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main(int argc, char **argv){
	std::string zombieNames;
	Zombie *zombies;
	int zombieNb;
	
	if (argc == 3)
	{
		zombieNb =  atoi(argv[1]);
		if (zombieNb < 0)
		{
			std::cout << "Put only positive number" << std::endl;
			return 1;
		}
		else if (zombieNb == 0)
		{
			std::cerr << "First argument MUST be a number!" << std::endl;
			return 1;
		}
		zombieNames = argv[2];
	}
	else
	{
		std::cerr << "Please insert number of zombie and their name as argument of ZombieHorde!" << std::endl;
		return 1;
	}
	
	zombies = zombieHorde(zombieNb, zombieNames);
	
	for (int i = 0; i < zombieNb; ++i)
	{
		zombies[i].announce();
	}
	delete [] zombies;
	return 0;
}