#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string x): ClapTrap(){

    this->name = x;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "A New ScavTrap: " << this->name << " is created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrav: " << this->name << " destructor has been called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << this->name << " just entered gate keeper mode!" << std::endl;
}