/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:48:21 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:48:22 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("wronganimal"){
    this->_type = "wrongcat";
    std::cout << "Animal " << this->_type << " is created!" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "Animal " << this->_type << " is destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat&copy): WrongAnimal(copy) {
    if (this != &copy)
        this->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat&copy){
    this->_type = copy._type;
    return (*this);
}

void WrongCat::makeSound(){
    if (this->_type == "wronganimal")
        std::cout << "uno strano animalo" << std::endl;
    if (this->_type == "wrongcat")
        std::cout << "Meow Bark Quack says the " << this->_type << std::endl;
}