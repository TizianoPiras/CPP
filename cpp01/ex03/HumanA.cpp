/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:39:06 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:09:34 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << this->_name << " has joinded the class HumanA with " << this->_weapon.getType() << " equipped. Welcome!" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "An HumanA " << this->_name << " is destroyed, he let fell down his " << this->_weapon.getType() << std::endl;
}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;    
}
