#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "A new ClapTrap named " << this->name << " is created as a copy" << std::endl;
}


ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "A new ClapTrap named: " << this->name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "All ClapTraps have been destroyed" << std::endl;
}

std::string ClapTrap::getName()
{
    return this->name;
}

int ClapTrap::getHitPoints()
{
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}

int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

void ClapTrap::setEnergyPoints(int amount, bool increse)
{
    if (increse)
        this->energyPoints += amount;
    else 
        this->energyPoints -= amount;
}

void ClapTrap::setHitPoints(int amount, bool increse)
{
    if (increse)
        this->hitPoints += amount;
    else 
        this->hitPoints -= amount;
}

void    ClapTrap::attack(const std::string &target)
{
     if (hitPoints == 0 || energyPoints == 0) {
        std::cout << "ClapTrap " << name << " cannot perform attack due to lack of hit points or energy points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->getName() << " attacks " << target + ": ";
    std::cout << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->setHitPoints(amount, false);
    std::cout << "ClapTrap " << this->name << " took " << amount << " damege!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if (hitPoints == 0 || energyPoints == 0) {
        std::cout << "ClapTrap " << name << " cannot be repaired due to lack of hit points or energy points!" << std::endl;
        return;
    }
    this->setHitPoints(amount, true);
    this->setEnergyPoints(1, false);
    std::cout << "ClapTrap " << this->name << " repaired it self for " << amount << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Copy)
{
    this->attackDamage = Copy.attackDamage;
    this->name = Copy.name;
    this->energyPoints = Copy.energyPoints;
    this->hitPoints = Copy.hitPoints;
    return (*this);
}