#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string *_ideas;
    public:
        Brain();
        ~Brain();
        Brain(Brain&copy);
        std::string *getIdeas();
        Brain &operator=(const Brain&copy);

};

#endif