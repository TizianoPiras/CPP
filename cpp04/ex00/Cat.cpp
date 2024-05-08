#include "Cat.hpp"

Cat::Cat(): Animal("cat"){
    this->_type = "cat";
    std::cout << "Animal " << this->_type << " is created!" << std::endl;
}

Cat::~Cat(){
    std::cout << "Animal " << this->_type << " is destroyed!" << std::endl;
}

Cat::Cat(const Cat&copy): Animal(copy) {
    if (this != &copy)
        this->_type = copy._type;
}

Cat &Cat::operator=(const Cat&copy){
    this->_type = copy._type;
    return (*this);
}

void Cat::makeSound(){
    if (this->_type == "animal")
        std::cout << " " << std::endl;
    if (this->_type == "cat")
        std::cout << "Meow meow says the " << this->_type << std::endl;
    if (this->_type == "dog")
        std::cout << "Bau bau says the " << this->_type << std::endl;
}