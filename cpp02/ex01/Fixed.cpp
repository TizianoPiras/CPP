/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:09:58 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/30 12:30:30 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _valueFixedPoint(0)
{
    std::cout << "Default costructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy  costructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int n)
{
    std::cout << "Constant integer costuctor called" << std::endl;
	this->_valueFixedPoint = n << this->_fractionalBits;
}

Fixed::Fixed(const float x)
{
    std::cout << "Constant float costructor called" << std::endl;
	this->_valueFixedPoint = roundf(x * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Default destuctor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
    return (this->_valueFixedPoint);
}

void    Fixed::setRawBits(int const raw)
{
    this->_valueFixedPoint = raw;
}

int     Fixed::toInt(void) const
{
    return (this->getRawBits() >> this->_fractionalBits);
}

float   Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << _fractionalBits));
}

Fixed	&Fixed::operator=(const Fixed &first)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_valueFixedPoint = first.getRawBits();
    return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed  &n)
{
    stream << n.toFloat();
    return (stream);
}