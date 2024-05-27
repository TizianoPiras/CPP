/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:41:16 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:13:09 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(){
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void Harl::info(){
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
	void (Harl::*complain_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (level.empty()) 
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}  
	int level_index = -1;
	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			level_index = i;
			break;
		}
	}
	switch (level_index) {
		case 0:
			(this->*complain_ptr[0])(); 
			(this->*complain_ptr[1])(); 
			(this->*complain_ptr[2])(); 
			(this->*complain_ptr[3])(); 
			break; 
		case 1:
			(this->*complain_ptr[1])();
			(this->*complain_ptr[2])(); 
			(this->*complain_ptr[3])(); 
			break;
		case 2:
			(this->*complain_ptr[2])();
			(this->*complain_ptr[3])(); 
			break;
		case 3:
			(this->*complain_ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
