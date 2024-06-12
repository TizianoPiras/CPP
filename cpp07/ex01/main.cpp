/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:38:04 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 13:54:14 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"


int main()
{
    int arr1[] = {0, 1, 2, 3};
    unsigned long int size_arr1 = (unsigned long int)(sizeof(arr1)/sizeof(arr1[0]));
    char     arr2[] = {'a', 'b', 'c'};
    unsigned long int size_arr2 = (unsigned long int)(sizeof(arr2)/sizeof(arr2[0]));

    ::iter(arr1, size_arr1, writElem<int>);
    ::iter(arr2, size_arr2, writElem<char>);
}