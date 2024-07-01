/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfinder.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:15:15 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/13 13:45:53 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfinder.hpp"

template <typename T>
typename T::vector::iterator easyFind(T &vector, int n){
    typename T::vector::iterator iterator = std::find(vector.begin(), vector.end(), n);
    if (iterator == vector.end())
        throw NumberNotFound();
    return (iterator);
}
