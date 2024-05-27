/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:46:37 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/23 13:49:53 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int	main()
{
	ClapTrap ClapA("ClapA");

	ClapA.takeDamage(5);
	ClapA.beRepaired(3);
	ClapA.attack("Marvin");
	ClapA.takeDamage(8);

}

