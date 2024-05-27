/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:48:58 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:48:59 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
     private:
        std::string _type;
        Brain *_attribute;
    public:
        Dog();
        ~Dog();
        Dog(const Dog&copy);
        Dog &operator=(const Dog&copy);
        Brain *getAttribute() const;
};

#endif