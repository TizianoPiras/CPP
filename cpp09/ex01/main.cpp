#include "RPN.hpp"



int main(int argc, char **argv)
{
	Rpn<int>	deque;
	std::string string = argv[1];
	try
	{
		if (argc != 2)
			throw std::out_of_range("Wrong argument don't forgot to put only one string with the quotes \" \"");
		std::cout << "Result = " << deque.calculateRpn(deque, string) << std::endl;
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}