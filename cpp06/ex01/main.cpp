/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:25 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/11 15:36:11 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data    c;
    uintptr_t uptr;

    c._data = 110;
    std::cout << "original pointer data: " << &c._data << std::endl;
    uptr = Serializer::serialize(&c);
    std::cout << "serialized <uintptr_t>: " << uptr << std::endl;
    Data *d = Serializer::deserialize(uptr);
    std::cout << "deserialized <Data*>: " << d << std::endl;
    uptr = Serializer::serialize(d);
    std::cout << "serialized <uintptr_t>: " << uptr << std::endl;
    d = Serializer::deserialize(uptr);
    std::cout << "deserialized <Data*>: " << d << std::endl;
}