/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:47:26 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 13:45:22 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"



int	main()
{
	ClapTrap clap("clap");
	FragTrap frag("frag");
	frag.highFiveGuys();
	clap.attack("JESUS");
	frag.attack("DIO");
	clap.takeDamage(20);
	clap.beRepaired(10);
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.highFiveGuys();
}

