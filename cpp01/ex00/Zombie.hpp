/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:19:07 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/30 14:18:04 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
			std::string _name;
	public:  
			Zombie(std::string const name);
			~Zombie();
			void announce() const;
};
Zombie *newZombie(const std::string name);
void	randomChump(std::string name);

#endif