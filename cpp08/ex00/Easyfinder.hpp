/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfinder.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:15:28 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/13 13:57:46 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFINDER_HPP
# define EASYFINDER_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

template <typename T>
typename T::vector::iterator easyFind(T &vector, int n);
class NumberNotFound: public std::exception 
{
	public:
		const char  *what() const throw(){
			return ("Number not found, retry!");
		}
};

# include "Easyfinder.tpp"
#endif