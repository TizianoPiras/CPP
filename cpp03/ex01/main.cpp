#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	ScavTrappone("ScavTrappone");
	ClapTrap	Claptrappetto("ClapTrappetto");
	
    ScavTrappone.attack("gesu");
    Claptrappetto.takeDamage(10);
    Claptrappetto.beRepaired(50);
	return (0);
}