/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:29:02 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 17:30:45 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n): _size(n){
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T> &copy){
	this->_size = copy._size;
	this->_array = new T[copy._size];
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array(){
	delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy) {
	if (this != &copy)
	{	
		delete [] _array;
		this->_size = copy._size;
		this->_array = new T[copy._size];
		for (unsigned int i = 0; i < this->_size; ++i)
			this->_array[i] = copy._array[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw OversizeIndex();
	return (this->_array[n]);
	
}

template <typename T>
unsigned int Array<T>::size(void){
	return (this->_size);
}
