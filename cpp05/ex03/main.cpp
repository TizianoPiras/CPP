#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Internal.hpp"

int main()
{
    Bureaucrat Pluto("Pluto", 1);
    Internal prova;
    AForm *refForm;

    refForm = prova.makeForm("shrubberry creation", "Pluto");
    prova.execute(Pluto);
    if (refForm)
    {
        refForm->beSigned(Pluto);
        refForm->execute(Pluto);
        delete refForm;
    }
    else
    {
        std::cerr << "Invalid type of form, please retry. (shrubberry creation, robotomy request, presidential pardon)" << std::endl;
        return 0;
    }
}