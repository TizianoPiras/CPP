#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->_name << " Destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string x): _name(x),_hitPoints(10), _energyPoints(10), _attackDamage(0)  {

    std::cout << "A new ClapTrap is created, Welcome: " << this->_name << std::endl;
} 

ClapTrap::ClapTrap(const ClapTrap &copy){


    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    std::cout << "A new Copy ClapTrap is created, Welcome: " << this->_name <<  std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    return (*this);
}

void ClapTrap::attack(const std::string &target){

   
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "Cannot attack" << std::endl;
        return ;
    }
    std::cout << "ClaptTrap " << this->_name << " attacks " << target << ", causing " \
    << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){

    this->_hitPoints -= amount;
    std::cout << "ClaptTrap " << this->_name << " take " << amount << " damage, " \
    << this->_hitPoints << " HP left!" << std::endl; 
    if (_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "Cannot repair" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClaptTrap " << this->_name << " recover " << amount << " HP, " \
    << this->_hitPoints << " HP left!" << std::endl; 
}








