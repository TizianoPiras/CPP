/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:40:56 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/23 17:08:20 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> 

PhoneBook::PhoneBook()
{
	this->_index = 0;
    this->_OldestIndex = 0;
	std::cout << "Welcome to Crappy! Created an empty phonebook for up to 8 contacts" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "See you soon!" << std::endl;
}

void PhoneBook::add(const Contact& contact)
{
    if (_index < maxContacts)
    {
        _contacts[_index++] = contact;
        std::cout << "Contact added successfully!" << std::endl; 
    }
    else 
    {
        std::cout << "Phonebook is full. Replacing the oldest contact." << std::endl;
        _OldestIndex = _OldestIndex % maxContacts;
        _contacts[_OldestIndex++] = contact;
    }
}

void PhoneBook::search(int id) 
{
    if (id <= 0 || id > maxContacts) {
        std::cout << "Invalid ID" << std::endl;
        return;
    }

    std::string fields[] = {
        _contacts[id - 1].get_fname(),
        _contacts[id - 1].get_lname(),
        _contacts[id - 1].get_nick(),
        _contacts[id - 1].get_secret(),
       _contacts[id - 1].get_phone_num()
    };
  
    for (int i = 0; i <= 4; i++) 
    {
        if (fields[i].length() > 10) 
        {
            fields[i].resize(10);
            fields[i].append(".");
        }
    }
    std::cout << "ID: " << id << std::endl;;

    for (int i = 0; i <= 4; i++) {
        std::cout << fields[i] << std::endl;
    }
}

void PhoneBook::displayContacts() const 
{    
    std::cout << "|Index     |FirstName |Last Name |Nickname  |" << std::endl;
    for (int i = 0; i < _index; ++i) {
        std::string fname = _contacts[i].get_fname();
        std::string lname = _contacts[i].get_lname();
        std::string nick = _contacts[i].get_nick();
        
        fname.resize(10, ' ');
        lname.resize(10, ' ');
        nick.resize(10, ' ');

        std::cout << "|" << std::setw(10) << i + 1 << "|"
            << std::setw(10) << fname << "|"
            << std::setw(10) << lname << "|"
            << std::setw(10) << nick << "|" << std::endl;
    }
    

}

    


    
    
    
    
    //std::cout << "|Index     |FirstName |Last Name |Nickname  |" << std::endl;
    //for (int i = 0; i < _index; ++i) 
    //{
    //    std::cout << "|" << std::setw(10) << i + 1 << "|"
    //        << std::setw(10) << _contacts[i].get_fname() << "|"
    //        << std::setw(10) << _contacts[i].get_lname() << "|"
    //        << std::setw(10) << _contacts[i].get_nick() << "|" << std::endl;
    //}



