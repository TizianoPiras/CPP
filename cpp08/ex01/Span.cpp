/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:53:56 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/14 12:45:40 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0){}

Span::Span(unsigned int size): _size(size){}

Span::Span(const Span&copy): _size(copy._size){
	this->_span = copy._span;
}

Span::~Span(){}

Span& Span::operator=(const Span&copy){
	if (this != &copy)
	{
		this->_size = copy._size;
		this->_span = copy._span;
	}
	return(*this);
}

void Span::addNumber(unsigned int nbr){
	
	if (this->_size < 2)
		throw TooLowMembers();
	if (this->_span.size() < this->_size)
		_span.push_back(nbr);
	else
		throw TooMuchNumbers();
	_span.sort();
	std::cout << "number putted int: " << nbr << std::endl;
}

unsigned int    Span::longestSpan(void){
	unsigned int    longest;
	
	if (_span.size() < 2)
		throw TooLowMembers();
	_span.sort();
	longest = (_span.back() -  *_span.begin());
	return (longest);
}

unsigned int    Span::shortestSpan(void){
	int    shortest = 10000;

	if (_span.size() < 2)
		throw TooLowMembers();
	for(std::list<int>::iterator iter = _span.begin(); *iter < _span.back(); ++iter)
	{
		std::vector<int> vec;
		std::list<int>::iterator next = iter;
		
		next++;
		for (unsigned int i = 0; i < _size; ++i)
		{
			vec.push_back(*next - *iter);
			if (vec[i] < shortest)
				shortest = vec[i];
		}
	}
	return (shortest);
}

void Span::addNumbersPlus(std::vector<int> range_it)
{
	size_t i = -1;

	if ((this->_span.size() + range_it.size()) > this->_size)
		throw TooMuchNumbers();
	while (++i < range_it.size())
		addNumber(range_it[i]);
}