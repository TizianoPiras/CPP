/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:13:02 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/25 11:57:48 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <map>
# include <sstream>
# include <string>
# include <regex>
# include <ctime>

class BitcoinExchange{
		private:
			std::multimap<std::string, float>   _database;
			std::multimap<std::string, float>   _dataout;
		public:
			BitcoinExchange(){};
			BitcoinExchange(const BitcoinExchange &copy)
			{
				this->_database = copy._database;
				this->_dataout = copy._dataout;
			}
			BitcoinExchange &operator=(const BitcoinExchange &copy)
			{
				if (this != &copy)
				{
					this->_database = copy._database;
					this->_dataout = copy._dataout;
				}
				return (*this);
			}
			~BitcoinExchange(){};
			void	DataIn(const std::string &fie_path);
			void	DataOut(const std::string &file_path);
};

#endif