/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:46:58 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:08:52 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRA_HPP

#include <iostream>

class ClapTrap{
		protected:
			std::string _name;
			int         _hitPoints;
			int         _energyPoints;
			int         _attackDamage;

		public:
			ClapTrap();
			~ClapTrap();
			ClapTrap(std::string x);
			ClapTrap(const ClapTrap &copy);
			ClapTrap &operator=(const ClapTrap &copy);
			virtual void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);          
};
















#endif