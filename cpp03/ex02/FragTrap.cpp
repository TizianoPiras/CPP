/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:42:50 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 13:56:59 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;	
}

FragTrap::~FragTrap(){
	
}

FragTrap::FragTrap(const FragTrap&copy): ClapTrap(copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

void FragTrap::attack(const std::string &target){   
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "Cannot attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}


void    FragTrap::highFiveGuys(void){
	std::string request;
	
	std::cout << "Do you want to give me an High Five? (YES/NO) ";
	std::cin >> request;
	
	if (request == "YES")
		std::cout << "Great! *Clap*, we are friend " << this->_name << "!" << std::endl;
	else if (request == "NO")
		std::cout << "Oh... ok... well...." << std::endl;
	else
		std::cout << "Please type only YES or NO." << std::endl;
}
