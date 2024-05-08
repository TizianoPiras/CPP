#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //const Animal *zoo = new Animal();         NOT ALLOWED IS ABSTRACT see ---> virtual std::string makeSound() = 0;
    Cat Gattino;
    Cat Gattino2(Gattino);
    Dog Cane;
    Dog Cane2(Cane);
    Brain *pensieri(Cane2.getAttribute());

    Gattino.makeSound();
    Gattino2.makeSound();
    Cane.makeSound();
    Cane2.makeSound();

    std::cout << Gattino2.getType() << std::endl;
    pensieri->getIdeas();
}