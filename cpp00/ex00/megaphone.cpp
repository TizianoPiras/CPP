/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:39:49 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:39:50 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc > 1){
        for (int i = 1; i < argc; ++i){
            for(char *c = argv[i]; *c; ++c){
                std::cout << (char)std::toupper(*c);
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}