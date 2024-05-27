/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:47:20 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:08:41 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap{
		public:
			FragTrap();
			FragTrap(std::string name);
			~FragTrap();
			FragTrap(const FragTrap &copy);
			void	attack(const std::string &target);
			void    highFiveGuys(void);
};











#endif