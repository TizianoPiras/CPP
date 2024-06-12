/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:13:58 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/11 15:25:41 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <cstdlib>
#include <stdint.h>

struct Data
{
	int _data;
	int *_ptr;
};

class Serializer{
		private:
			Serializer();
		public:
			~Serializer();
			Serializer(const Serializer&copy);
			Serializer &operator=(const Serializer&copy);
			static uintptr_t serialize(Data *ptr);
			static Data *deserialize(uintptr_t raw);
			class exceptions: public std::exception 
			{
				public:
					const char  *what() const throw(){
						return "Cannot convert that pointer";
					}
			};
};
#endif