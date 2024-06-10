/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:09:33 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/10 18:10:51 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter:: ScalarConverter()
{
	
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter&copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter&copy)
{
	if(this != &copy)
		*this = copy;
	return (*this);
}

void ScalarConverter::converter(std::string &obj)
{
	double value;
	char	*end;
	
	if (obj.length() == 1 && isprint(obj[0]) && !std::isdigit(obj[0]))
	{
		strToc(obj[0]);
		return ;
	}
	if (obj[obj.length() - 1] == 'f')
		obj[obj.length() - 1] = '\0';
	if (obj == "nan" || obj == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (obj == "inf" || obj == "inff" || obj == "+inf" || obj == "+inff")
	{		
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if (obj == "-inf" || obj == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;	
	}
	errno = 0;
    value = std::strtod(obj.c_str(), &end);
    if (*end != '\0' || errno != 0) 
	{
        std::cout << "Conversion error: Invalid literal" << std::endl;
        return;
    }
	strToi(value);
	strTof(value);
	strTod(value);	
}

void	ScalarConverter::strToc(char c)
{
	int     i = static_cast<int>(c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f"<<std::endl;
    std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::strToi(double obj)
{
	if (obj < 127 && obj > 31)
		std::cout << "char: " << static_cast<char>(obj) << std::endl;
	else
		std::cout << "char: Not displayable." << std::endl;
	if(obj >= std::numeric_limits<int>::min() && obj <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(obj) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	ScalarConverter::strTof(double obj)
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(obj) << "f" << std::endl;
}

void	ScalarConverter::strTod(double obj)
{
	if (obj >= 340282346638528859811704183484516925440.0000000000000000)
		std::cout << "double: inf" << std::endl;
	else if (obj <= -340282346638528859811704183484516925440.0000000000000000)
		std::cout << "double: -inf" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double: " << obj << std::endl;
	}
}
