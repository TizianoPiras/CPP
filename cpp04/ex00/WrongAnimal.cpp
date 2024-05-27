/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:48:14 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:48:15 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->_type = "wronganimal";
    std::cout << "WrongAnimal " << this->_type << " is created!" << std::endl;

}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal " << this->_type << " is destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
    this->_type = type;
    std::cout << "WrongAnimal " << this->_type << " is created!" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal&copy) {
    if (this != &copy)
        this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal&copy){
    this->_type = copy._type;
    return (*this);
}

std::string WrongAnimal::getType() const{
    return(this->_type);
}

void WrongAnimal::makeSound() const{
    if (this->_type == "wronganimal")
        std::cout << "uno strano animalo" << std::endl;
    if (this->_type == "cat")
        std::cout << "Meow meow says the " << this->_type << std::endl;
    if (this->_type == "dog")
        std::cout << "Bau bau says the " << this->_type << std::endl;
}