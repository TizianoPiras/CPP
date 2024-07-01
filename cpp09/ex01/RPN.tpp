#include "RPN.hpp"

template <typename Type> 
Type Rpn<Type>::add(Type a, Type b)
{
	return (a + b);
}
template <typename Type> 
Type Rpn<Type>::subtract(Type a, Type b)
{
	return (a - b);
}
template <typename Type> 
Type Rpn<Type>::multiply(Type a, Type b)
{
	return (a * b);
}
template <typename Type> 
Type Rpn<Type>::divide(Type a, Type b)
{
	if (b == 0)
		throw BadDivisor();
	return (a / b);
}
template <typename Type>
int Rpn<Type>::calculateRpn(std::deque<Type> deque, std::string  str) 
{
	std::deque<Type>	temp = deque;
	for(int i = 0; i < str.length(); ++i)
	{
		if (str[i] == ' ')
			continue;
		else if (isdigit(str[i]))
		{
			if (isdigit(str[i + 1]))
				throw Rpn<Type>::MaxTenNbr();
			temp.push_back(str[i] - '0');
		}
		else
		{
			if (temp.size() < 2)
				throw Rpn<Type>::BadSize();
			Type a = temp.back();
			temp.pop_back();
			Type b = temp.back();
			temp.pop_back();
			switch (str[i])
			{
				case ('+'):
					temp.push_back(add(b,a));
					break;
				case ('-'):
					temp.push_back(subtract(b,a));
					break;
				case ('*'):
					temp.push_back(multiply(b,a));
					break;
				case ('/'):
					temp.push_back(divide(b,a));
					break;
				default:
					throw Rpn<Type>::BadArgument();
			}
		}
	}
	return(temp.back());
}
