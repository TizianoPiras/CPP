#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Form;

class Bureaucrat{

    private:
        const   std::string _name;
        int     _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        std::string getName();
        int         getGrade();
        int         operator++(int grade);
        int         operator--(int grade);
        void        signForm(Form &form);
        class gradeTooHighExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade too high";
                }
        };
        class gradeTooLowExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade too low";
                }
        };
};


std::ostream &operator<<(std::ostream os,  Bureaucrat &copy);








#endif