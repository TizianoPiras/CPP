#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

    private:
        const std::string _name;
        bool  _sign;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, const int gts, const int gte);
        ~AForm();
        //AForm(const AForm&copy);
        //AForm &operator=(const AForm&copy);
        std::string     getName() const;
        int             getSign() const;
        int             getGradeToSign() const;
        int             getGradeToExecute() const;
        void            beSigned(Bureaucrat &bureau);
        virtual void    execute(Bureaucrat const &executor) const = 0;
        

        class GradeTooHighExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade required is too high";
                }
        };
        class GradeTooLowExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade required is too low";
                }
        };

        class NotSigned: public std::exception
        {
            public:
                const char  *what() const throw(){
                    return "The form is NOT signed.";
                }
        };
};
std::ostream &operator<<(std::ostream os, AForm &copy);

#endif