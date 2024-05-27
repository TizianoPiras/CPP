/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:47:04 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 12:40:42 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){

}

ScavTrap::~ScavTrap()  {
	std::cout << "ScavTrap: " << this->_name << " destructor has been called" << std::endl;
   
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: " << this->_name << " costructor has been called" << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy){
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
	
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
		return *this;
}

void ScavTrap::attack(const std::string &target){

   
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "Cannot attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " \
	<< this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void    ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->_name << " just entered gate keeper mode!" << std::endl;
}