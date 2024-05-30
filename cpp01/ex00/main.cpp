/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:35:26 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/30 14:17:59 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("Zombie on heap mem");
	Zombie voidZombie("");

	voidZombie.announce();
	heapZombie->announce();
	randomChump("Zombie on stack mem");

	delete heapZombie;
	return 0;
}