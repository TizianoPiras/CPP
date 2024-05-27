/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:40:51 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/23 17:10:43 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <stdlib.h>

int main() {
    PhoneBook phonebook;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::string command;
        std::getline(std::cin, command); 

        if (command == "ADD") {
            Contact newContact;

            std::string firstName, lastName, nickname, darkestSecret, phoneNumber;
            std::cout << "Enter First Name: ";
            std::getline(std::cin, firstName);
            std::cout << "Enter Last Name: ";
            std::getline(std::cin, lastName);
            std::cout << "Enter Nickname: ";
            std::getline(std::cin, nickname);
            std::cout << "Enter Darkest Secret: ";
            std::getline(std::cin, darkestSecret);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, phoneNumber);

            newContact.set_fname(firstName);
            newContact.set_lname(lastName);
            newContact.set_nick(nickname);
            newContact.set_secret(darkestSecret);
            newContact.set_phone_num(phoneNumber);

            phonebook.add(newContact);
        } else if (command == "SEARCH") {
            std::string id;
            int id_num;
            phonebook.displayContacts();
            std::cout << "Enter contact ID: ";
            std::cin >> id;
            std::cin.ignore(); 
            id_num = std::atoi(id.c_str());
            phonebook.search(id_num);

        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
    }
    return 0;
}
