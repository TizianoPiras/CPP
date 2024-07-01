/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:57:12 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/18 16:52:03 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int argc, char**argv)
{
    BitcoinExchange bit_coin;
    std::string     file_path = "data.csv";
    if (argc != 2)
        std::cerr << "AO!" << std::endl;
    std::string     file_out = argv[1];
    bit_coin.DataIn(file_path);
    bit_coin.DataOut(file_out);
}