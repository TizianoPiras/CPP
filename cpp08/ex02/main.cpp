/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:26:23 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/14 16:03:46 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
# include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "TOP: " << mstack.top() << std::endl;
	std::cout << "SIZE: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterators it = mstack.begin();
	MutantStack<int>::iterators ite = mstack.end();
	mstack.pop();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "IT: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::list<int> l;

	
	std::cout << "TOP_S: " << s.top() << std::endl;
	return 0;
}