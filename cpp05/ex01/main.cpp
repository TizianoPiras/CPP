#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("pippo", 4);
    //Bureaucrat b("solo", 1);
    Form    service("service", 3, 140);
    //Form    cpp("cpp", 149, 149);
    service.beSigned(a);
    a.signForm(service);
    a.operator++(a.getGrade());
    service.beSigned(a);
    a.signForm(service);
    //service.beSigned(b);
    //cpp.beSigned(a);
    //cpp.beSigned(b);
    //b.operator--(b.getGrade());
    //service.beSigned(a);
    //service.beSigned(b);
    //cpp.beSigned(a);
    //cpp.beSigned(b);
    //service.beSigned(a);
    //a.signForm(cpp);
    //b.signForm(service);
    //b.signForm(cpp);




}