#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _grade(150){
    std::cout << "Generic Bureaucrat is created with this grade: " << this->_grade << std::endl;
} 

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){

    try
    {
        if (grade >= 1 && grade <= 150)
            this->_grade = grade;
        else if(grade < 1)
            throw (GradeTooHighExeption());
        else 
            throw (GradeTooLowExeption());
    }
    catch(GradeTooHighExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooLowExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Bureaucrat: " << this->_name << ", with this grade: " <<  this->_grade << " is created" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat: " << this->_name << ", with this grade: " <<  this->_grade << " has fired" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name){
    if (this != &copy)
        this->_grade = copy._grade;  

}

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

int Bureaucrat::operator++(int grade){
    try
    {
        if (grade <= 1)
            throw (GradeTooHighExeption());
        else 
            this->_grade--;
    }
    catch(GradeTooHighExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}

int Bureaucrat::operator--(int grade)
{
    try
    {
        if (grade >= 150)
            throw (GradeTooLowExeption());
        else 
            this->_grade++;

    }
    catch(GradeTooLowExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}

void    Bureaucrat::signForm(AForm &form){
    
    if(form.getSign() == 1)
        std::cout << this->_name << " signed " << form.getName() << " form." << std::endl;
    else
    {
        std::cout << this->_name << " couldn't sign  " << form.getName() << " form, beacause " << this->_grade << " grade is lower than " \
            << form.getGradeToSign() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &copy){
    os << copy.getName() << "Bureaucrat grade: " << copy.getGrade() << std::endl;
    return os;
}
