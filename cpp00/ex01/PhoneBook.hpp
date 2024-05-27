/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:40:59 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:41:00 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream> 

class PhoneBook
{
    private:
            Contact _contacts[8];
            int     _index;
            int     _OldestIndex;
            static const int maxContacts = 8;
    public:
            PhoneBook();
            ~PhoneBook();
            void    add(const Contact& contact);
            void    search(int id);
            void    displayContacts()const;

            Contact get_contact(int index);

};

#endif