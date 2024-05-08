#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

    private:
        std::string _name;
        int         _hitPoints;       
        int         _energyPoints;
        int         _attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &other);
        std::string getName();
        int         getHitPoints();
        int         getEnergyPoints();
        int         getAttackDamage();
        
        void        setEnergyPoints(int amount, bool increse);
        void        setHitPoints(int amount, bool increse);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

        ClapTrap    &operator=(const ClapTrap &Copy);
};



#endif