/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:53:41 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/10 17:36:52 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    std::string arg;
    if (argc != 2)
        std::cerr << "Error input argument. Please insert only one <argument>." << std::endl;
    else
    {
        arg = argv[1];
        ScalarConverter::converter(arg);
    }
}