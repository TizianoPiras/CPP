#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Pippo("Pippo", 5);
    ShrubberryCrationForm Three("pippo_three");
    RobotomyRequestForm Robot("pippo_robot");
    PresidentialPardonForm Pardon("pippo_pardon");
    Three.beSigned(Pippo);
    Robot.beSigned(Pippo);
    Pardon.beSigned(Pippo);
    Three.execute(Pippo);
    Robot.execute(Pippo);
    Pardon.execute(Pippo);


}