/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:43:35 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/14 13:54:40 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack&copy): std::stack<T>(copy){}

template <typename T>
MutantStack<T>::~MutantStack(){}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack&copy){
    if (this != &copy)
        std::stack<T>::operator=(copy);
    return(*this);
}
