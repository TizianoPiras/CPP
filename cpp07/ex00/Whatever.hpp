/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:08:34 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 12:43:51 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <cmath>
# include <iostream>

template <typename Temp>
void swap(Temp &a, Temp &b){
    Temp c;
    
    c = a;
    a = b;
    b = c;
}

template <typename Temp>
Temp min(Temp a, Temp b){
    return (a<b?a:b);
}

template <typename Temp>
Temp max(Temp a, Temp b){
    return (a>b?a:b);
}

#endif