#include "Dog.hpp"



Dog::Dog(): Animal("dog"){
    this->_type = "dog";
    this->_attribute = new Brain();
    std::cout << "Animal in Dog class " << this->_type << " is created!" << std::endl;
}

Dog::~Dog(){
    delete (this->_attribute);
    std::cout << "Animal in Dog class " << this->_type << " is destroyed!" << std::endl;
}

Dog::Dog(const Dog&copy): Animal(copy) {
    if (this != &copy)
        this->_type = copy._type;
    this->_attribute = new Brain(*(copy.getAttribute()));

}

Dog &Dog::operator=(const Dog&copy){
     this->_type = copy._type;
    if (this->_attribute)
        delete (this->_attribute);
    this->_attribute = new Brain(*(copy.getAttribute()));
    return (*this);
}


Brain *Dog::getAttribute() const{
    return(this->_attribute);
}

//void Dog::makeSound(){
//    if (this->_type == "animal")
//        std::cout << " " << std::endl;
//    if (this->_type == "cat")
//        std::cout << "Meow meow says the " << this->_type << std::endl;
//    if (this->_type == "dog")
//        std::cout << "Bau bau says the " << this->_type << std::endl;
//}