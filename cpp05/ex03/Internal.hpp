#ifndef INTERNAL_HPP
# define INTERNAL_HPP
# include <iostream>
# include "AForm.hpp"
# include "ShrubberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Internal: public AForm{
    private:
        ;
    public:
        Internal();
        ~Internal();
        AForm *makeForm(std::string name, std::string target);
        void    execute(Bureaucrat const &executor) const;
        class FormNotFoundException: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "The form specified is not found";
                }
        };

};
#endif