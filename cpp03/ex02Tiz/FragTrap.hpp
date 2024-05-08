#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

        private:
            std::string _name;
            int         _hitPoints;
            int         _energyPoints;
            int         _attackDamage;
        public:
            FragTrap();
            FragTrap(const FragTrap &copy);
            
};











#endif