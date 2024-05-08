#include "Brain.hpp"

Brain::Brain(){
    this->_ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "fooood";
    std::cout << "new brain" << std::endl;
}

Brain::~Brain(){
    if (this->_ideas)
        delete [] (this->_ideas);
    std::cout << "brain deleted" << std::endl;
}

Brain::Brain(Brain&copy){
    std::string *refIdeas = copy.getIdeas();
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        std::cout << "copy" << std::endl;
        this->_ideas[i] = refIdeas[i] + " good ";
        std::cout <<  this->_ideas[i] << std::endl;

    }
    std::cout << "DONE" << std::endl;
}

std::string *Brain::getIdeas(){
    for (int i = 0; i < 100; i++)
        std::cout << "Animal is thinking: \"" << this->_ideas[i] << "\"." << std::endl;
    return (this->_ideas);
}