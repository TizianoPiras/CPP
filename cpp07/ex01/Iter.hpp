/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:50:23 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 13:54:37 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename Temp, typename Func>
void    iter(Temp *array, unsigned long int size, Func func)
{
    for (unsigned long int i = 0; i < size; ++i)
        func(array[i]);
}

template <typename Temp>
void    writElem(Temp arg){
    std::cout << "elem= " << arg << std::endl;
}

#endif