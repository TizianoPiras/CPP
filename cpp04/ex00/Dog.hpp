/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:48:07 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:48:08 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
     private:
        std::string _type;
    public:
        Dog();
        ~Dog();
        Dog(const Dog&copy);
        Dog &operator=(const Dog&copy);
        void makeSound();
};

#endif