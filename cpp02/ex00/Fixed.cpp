/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:07:34 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/30 12:31:16 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue(0){
    std::cout << "A default constuctor is called with " << this->_fixedPointValue << " value." << std::endl;
}

Fixed::Fixed(const Fixed &copy){
    std::cout << "A copy constructor is called" << std::endl;
    this->_fixedPointValue = copy.getRawBits();    
}

Fixed&Fixed::operator=(const Fixed &copy){
    std::cout << "A new fixed point is genereted by assignament operator (=)" << std::endl;
    if (this != &copy)
        this->_fixedPointValue = copy.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "A destructor is called with " << this->_fixedPointValue << " as value." << std::endl;
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function is called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(const int rawBits){
    this->_fixedPointValue = rawBits;
    std::cout << "setRawBits member function is called, and the value is setted to " << this->_fixedPointValue << std::endl;
}
