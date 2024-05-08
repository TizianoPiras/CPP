#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage)
{
    std::cout << "A new ClapTrap named: " << this->name << " has just been created as a copy!" << std::endl;
}


ClapTrap::ClapTrap(std::string name): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "A new ClapTrap named: " << this->name << "  has just been created" << std::endl;
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
    return this->HitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return this->EnergyPoints;
}

int ClapTrap::getAttackDamage()
{
    return this->AttackDamage;
}

void ClapTrap::setEnergyPoints(int amount, bool increse)
{
    if (increse)
        this->EnergyPoints += amount;
    else 
        this->EnergyPoints -= amount;
}

void ClapTrap::setHitPoints(int amount, bool increse)
{
    if (increse)
        this->HitPoints += amount;
    else 
        this->HitPoints -= amount;
}

void    ClapTrap::attack(const std::string &target)
{
     if (HitPoints == 0 || EnergyPoints == 0) {
        std::cout << "ClapTrap " << name << " cannot perform attack due to lack of hit points or energy points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->getName() << " attacks " << target + ":";
    std::cout << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->setHitPoints(amount, false);
    std::cout << "ClapTrap " << this->name << " took " << amount << " damege!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if (HitPoints == 0 || EnergyPoints == 0) {
        std::cout << "ClapTrap " << name << " cannot be repaired due to lack of hit points or energy points!" << std::endl;
        return;
    }
    this->setHitPoints(amount, true);
    this->setEnergyPoints(1, false);
    std::cout << "ClapTrap " << this->name << " repaired it self for " << amount << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Copy)
{
    this->AttackDamage = Copy.AttackDamage;
    this->name = Copy.name;
    this->EnergyPoints = Copy.EnergyPoints;
    this->HitPoints = Copy.HitPoints;
    return (*this);
}