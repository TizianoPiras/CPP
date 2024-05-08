#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        std::string _type;
        Brain *_attribute;
    public:
        Cat();
        ~Cat();
        Cat(const Cat&copy);
        Cat &operator=(const Cat&copy);
        std::string getType() const;
        Brain *getAttribute() const;
        //void makeSound();
};

#endif