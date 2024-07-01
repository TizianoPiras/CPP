/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:28:32 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/14 12:46:33 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>
# include <iterator>
# include <cmath>

class Span{
	private:
		unsigned int   		_size;
		std::list<int>		_span;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span&copy);
		~Span();
		Span &operator=(const Span&copy);
		void addNumber(unsigned int nbr);
		unsigned int longestSpan();
		unsigned int shortestSpan();
		void addNumbersPlus(std::vector<int> range_it);
		class TooMuchNumbers: public std::exception 
		{
			public:
				const char  *what() const throw(){
					return ("Error: too many arguments!");
				}
		};
		class TooLowMembers: public std::exception 
		{
			public:
				const char  *what() const throw(){
					return ("Error: the span is too small!");
				}
		};
};


#endif