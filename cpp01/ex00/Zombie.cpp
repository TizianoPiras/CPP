/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:16 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/30 14:10:57 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const name) {
	this->_name = name;
	std::cout << "A new zombie is re-born, call him " << this->_name << "!" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "The zombie called " << this->_name << " is deead, again ..it was an headshot." << std::endl;
}

void Zombie::announce() const{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
