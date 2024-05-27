/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:48:46 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:48:47 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("cat"){
    this->_type = "cat";
    this->_attribute = new Brain();
    std::cout << "Animal in Cat class " << this->_type << " is created!" << std::endl;
}

Cat::~Cat(){
    delete (this->_attribute);
    std::cout << "Animal in Cat class " << this->_type << " is destroyed!" << std::endl;
}

Cat::Cat(const Cat&copy): Animal(copy) {
    this->_type = copy._type;
    this->_attribute = new Brain(*(copy.getAttribute()));
}

std::string Cat::getType() const{
    return(this->_type);
}

Brain *Cat::getAttribute() const{
    return(this->_attribute);
}

Cat &Cat::operator=(const Cat&copy){
    this->_type = copy._type;
    if (this->_attribute)
        delete (this->_attribute);
    this->_attribute = new Brain(*(copy.getAttribute()));
    return (*this);
}

//void Cat::makeSound(){
//    if (this->_type == "cat")
//        std::cout << "Meow meow says the " << this->_type << std::endl;
//}