/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:03:17 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/10 17:14:19 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <cstdlib>
# include <sstream>
# include <cctype>
# include <limits>
# include <cerrno>
# include <iomanip>

class ScalarConverter {
		private:
			;
		public:
			ScalarConverter();
			ScalarConverter(const ScalarConverter &copy);
			ScalarConverter &operator=(const ScalarConverter & copy);
			~ScalarConverter();
			static void		converter(std::string &obj);
			static void		strToc(char c);
			static void		strToi(double obj);
			static void		strTof(double obj);
			static void		strTod(double obj);
			//bool			isNumber(std::string &obj);
};

#endif