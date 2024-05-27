/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:47:01 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 12:37:25 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int	main()
{
	ScavTrap scavy("scavy");
	ClapTrap clap("clap");

	clap.attack("JESUS");
	scavy.attack("DIO");
	scavy.guardGate();
	clap.takeDamage(85);
	clap.beRepaired(5);
	scavy.takeDamage(85);
	scavy.beRepaired(5);
}

