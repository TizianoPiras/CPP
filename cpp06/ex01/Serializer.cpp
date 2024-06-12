/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:29:57 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/11 15:39:37 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "serializer constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy){
	*this = copy;
	std::cout << "serializer copy called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &copy){
	if (this != &copy)
		*this = copy;
	return (*this);
	std::cout << "serializer operator (=) called" << std::endl;
}

Serializer::~Serializer(){
	std::cout << "serializer deconstructor called" << std::endl;
}

uintptr_t	Serializer::serialize(Data *ptr){
	std::cout << "serialize conversion from " << ptr << " to " << reinterpret_cast<uintptr_t>(ptr) << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
	std::cout << "serialize conversion from " << raw << " to " << reinterpret_cast<Data *>(raw) << std::endl;
	return (reinterpret_cast<Data*>(raw));
}