#include "ClapTrap.hpp"



int	main()
{
	std::cout << "---- CLAPTRAP MAIN ----\n" << std::endl;

	ClapTrap	ClaptrapA("ClaptrapA");

	ClapTrap	ClaptrapB("ClaptrapB");
	//ClapTrap    ClapTrapC(ClaptrapA);
//
	
	ClaptrapA.attack(ClaptrapB.getName());
	//std::cout << ClaptrapA.getName() << std::endl; 
	//ClaptrapA.setEnergyPoints(2, false);
	//std::cout << ClapTrapC.getName() << std::endl; 
	//std::cout << ClaptrapA.getEnergyPoints() << std::endl; 
	//std::cout << ClapTrapC.getEnergyPoints() << std::endl; 
    
	 


}

