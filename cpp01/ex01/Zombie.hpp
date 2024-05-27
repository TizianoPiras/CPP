/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:44 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/27 14:06:28 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie {
	private:
			std::string name;
	public:
			Zombie();
			~Zombie();
			void announce() const;
			void setName(std::string name);
};
Zombie *zombieHorde(int N, std::string name);

#endif