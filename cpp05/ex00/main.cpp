#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("pippo", 150);
    Bureaucrat b("solo", 1);

    a.operator++(a.getGrade());
    b.operator++(b.getGrade());

}