#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){

    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "A new ClapTrap: " << _name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "All ClapTraps destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target){

    

}

std::string ClapTrap::getName()
{
    return this->_name;
}

int ClapTrap::getHitPoints()
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage()
{
    return this->_attackDamage;
}

void ClapTrap::setEnergyPoints(int amount, bool increse)
{
    if (increse)
        this->_energyPoints += amount;
    else 
        this->_energyPoints -= amount;
}

void ClapTrap::setHitPoints(int amount, bool increse)
{
    if (increse)
        this->_hitPoints += amount;
    else 
        this->_hitPoints -= amount;
}
