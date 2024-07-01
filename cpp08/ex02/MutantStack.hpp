/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:04:03 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/14 16:05:31 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T>{
		public:
			MutantStack();
			MutantStack(const MutantStack&copy);
			virtual ~MutantStack();
			MutantStack &operator=(const MutantStack&copy);
			typedef typename std::deque<T>::iterator iterators;
			iterators	begin(){return(std::stack<T>::c.begin());};
			iterators	end(){return(std::stack<T>::c.end());};			
};

# include "MutantStack.tpp"

#endif