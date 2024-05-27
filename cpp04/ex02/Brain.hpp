/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:49:19 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:49:20 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string *_ideas;
    public:
        Brain();
        ~Brain();
        Brain(Brain&copy);
        std::string *getIdeas();
        Brain &operator=(const Brain&copy);

};

#endif