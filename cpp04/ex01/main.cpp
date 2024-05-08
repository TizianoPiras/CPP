#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int n = 2;
    //const Animal *meta = new Animal();
    //const Animal *j = new Dog();
    //const Animal *i = new Cat();
    std::cout << "Quanti animali vuoi nel tuo zoo? ";
    std::cin >> n;
    std::cout << "Daje!" << std::endl;
    const Animal *zoo[n];
    //const Cat Gattino;
    //const Cat Gattino2(Gattino);
    //const Dog Cane;
    //const Dog Cane2(Cane);
    //pensieri->getIdeas();

    for(int k = 0; k < (n/2) ; k++)
        zoo[k] = new Dog();
    for(int k = (n/2); k < n ; k++)
        zoo[k] = new Cat();

  

    //std::cout << j->getType() << " " << std::endl;
    //std::cout << i->getType() << " " << std::endl;
    //i->makeSound();
    //j->makeSound();
    //meta->makeSound();

    for(int k = 0; k < n; k++)
        zoo[k]->makeSound();
    for(int k = 0; k < n; k++)
        delete zoo[k];
    //delete meta;
    //delete j;
    //delete i;

}