/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:14:27 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 17:11:04 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cmath>
# include <cstdlib>
# include <sstream>
# include <cctype>
# include <limits>
# include <cerrno>
# include <iomanip>

template<typename T>
class Array{
	private:
			T	*_array;
			unsigned int _size;
	public:
			Array();
			Array(unsigned int n);
			Array(const Array &copy);
			~Array();
			Array &operator=(const Array &copy);
			T &operator[](unsigned int n);
			unsigned int size(void);
			class OversizeIndex: public std::exception 
			{
				public:
					const char  *what() const throw(){
						return ("Oversize");
					}
			};
};

#include "Array.tpp"
#endif