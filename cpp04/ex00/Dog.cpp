#include "Dog.hpp"

Dog::Dog(): Animal("dog"){
    this->_type = "dog";
    std::cout << "Animal " << this->_type << " is created!" << std::endl;
}

Dog::~Dog(){
    std::cout << "Animal " << this->_type << " is destroyed!" << std::endl;
}

Dog::Dog(const Dog&copy): Animal(copy) {
    if (this != &copy)
        this->_type = copy._type;
}

Dog &Dog::operator=(const Dog&copy){
    this->_type = copy._type;
    return (*this);
}

void Dog::makeSound(){
    if (this->_type == "animal")
        std::cout << " " << std::endl;
    if (this->_type == "cat")
        std::cout << "Meow meow says the " << this->_type << std::endl;
    if (this->_type == "dog")
        std::cout << "Bau bau says the " << this->_type << std::endl;
}