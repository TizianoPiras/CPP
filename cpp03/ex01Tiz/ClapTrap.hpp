#ifndef CLAPTRAP_HPP
#define CLAPTRA_HPP

#include <iostream>

class ClapTrap{

        protected:
            std::string _name;
            int         _hitPoints;
            int         _energyPoints;
            int         _attackDamage;

        public:
            ClapTrap();
            ~ClapTrap();
            ClapTrap(std::string x);
            ClapTrap(const ClapTrap &copy);
            ClapTrap &operator=(const ClapTrap &copy);
            void attack(const std::string &target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);          

            void setHitpoints(unsigned int points);

};
















#endif