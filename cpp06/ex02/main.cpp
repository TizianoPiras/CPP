#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){

    srand(time(NULL));
    int random_index = std::rand() % 3;
    if (random_index == 0)
        return (new A);
    else if (random_index == 1)
        return (new B);
    else
        return (new C);
    
}

void identify(Base* p){

    if(dynamic_cast<A*>(p))  
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else if (p == NULL)
    {
        std::cout << "NULL" << std::endl;
        return ;
    }
    else 
    {
        std::cout << "No type found" << std::endl;
    }


}

void identify(Base& p){

    try{
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A&" << std::endl;
        return ;
    }
    catch(const std::exception &e){}
    try{
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B&" << std::endl;
        return ;

    }
    catch(const std::exception &e){}
    try{
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C&" << std::endl;
        return ;
    }
    catch(const std::exception &e){}
    
}


int main(){

    Base *prova;
    prova = generate();
    identify(*prova);
    identify(prova);
    delete prova;
    return 0;
}