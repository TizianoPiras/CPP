#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <time.h>
#include <deque>

template <typename Type> 
class Rpn: public std::deque<Type>{

	public:
		Rpn(): std::deque<Type>(){};
		~Rpn(){};
		Rpn(const Rpn<Type> &copy): std::deque<Type>(copy){};
		Type add(Type a, Type b);
		Type subtract(Type a, Type b);
		Type multiply(Type a, Type b);
		Type divide(Type a, Type b);
		int calculateRpn(std::deque<Type> deque, std::string  str);
		class BadDivisor: public std::exception 
		{
			public:
				const char  *what() const throw(){
					return ("Are u trying dividing by 0?!");
				}
		};
		class MaxTenNbr: public std::exception 
		{
			public:
				const char  *what() const throw(){
					return ("RPN takes only integer under 10 (0 to 9)!");
				}
		};
		class BadArgument: public std::exception 
		{
			public:
				const char  *what() const throw(){
					return ("Invalid member in RPN!");
				}
		};
		class BadSize: public std::exception 
		{
			public:
				const char  *what() const throw(){
					return ("We need more numbers in our equation!");
				}
		};
};


# include "RPN.tpp"

#endif






