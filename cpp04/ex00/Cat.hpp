/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:48:01 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:48:03 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    private:
        std::string _type;
    public:
        Cat();
        ~Cat();
        Cat(const Cat&copy);
        Cat &operator=(const Cat&copy);
        void makeSound();
};

#endif