/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:47:22 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:10:24 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_weapon = NULL;
	std::cout << this->_name << " has joinded the class HumanB with " << this->_weapon << " equipped. Welcome!" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " is destroyed, he let fell down his " << this->_weapon->getType() << std::endl;
}

void HumanB::attack(){
	if (this->_weapon != NULL)
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;  
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " has equipped " << this->_weapon->getType() << std::endl;
}
