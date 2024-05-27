/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:47:45 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:11:11 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
	std::cout << "A new weapon is forged, that is a " << this->_type << std::endl;
}

Weapon::~Weapon(void){
	std::cout << this->_type << " is broken" << std::endl;
}

const std::string &Weapon::getType()
{
	std::string &TypeRef = this->_type;
	return TypeRef;
}

void Weapon::setType(std::string NewType){
	std::cout << "The weapon " << this->_type;
	this->_type = NewType;
	std::cout << " change it's type to " << this->_type << std::endl;
}
