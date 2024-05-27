/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:07:45 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/23 12:07:48 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

    private:
        int _fixedPointValue;
        static const int _fractBit = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        ~Fixed();
        int getRawBits(void)const;
        void setRawBits(const int rawBits);
        Fixed &operator=(const Fixed &copy); 

};











#endif