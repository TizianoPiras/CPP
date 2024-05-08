#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){

}

ScavTrap::~ScavTrap()  {
    std::cout << "ScavTrap: " << this->_name << " destructor has been called" << std::endl;
   
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    
    std::cout << "ScavTrap: " << this->_name << " costructor has been called" << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy){
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
        return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << this->_name << " just entered gate keeper mode!" << std::endl;
}