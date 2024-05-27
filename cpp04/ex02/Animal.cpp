/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:49:09 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:49:10 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->_type = "animal";
    std::cout << "Animal " << this->_type << " has joined the class!" << std::endl;

}

Animal::~Animal(){
    std::cout << "Animal " << this->_type << " is destroyed!" << std::endl;
}

Animal::Animal(std::string type){
    this->_type = type;
    std::cout << "Animal " << this->_type << " has joined the class!" << std::endl;

}

Animal::Animal(const Animal&copy) {
    if (this != &copy)
        this->_type = copy._type;
}

Animal &Animal::operator=(const Animal&copy){
    this->_type = copy._type;
    return (*this);
}

std::string Animal::getType() const{
    return(this->_type);
}

void Animal::makeSound() const{
    if (this->_type == "animal")
        std::cout << " " << std::endl;
    if (this->_type == "cat")
        std::cout << "Meow meow says the " << this->_type << std::endl;
    if (this->_type == "dog")
        std::cout << "Bau bau says the " << this->_type << std::endl;
}