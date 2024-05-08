#include "AForm.hpp"

AForm::AForm(): _sign(false), _gradeToSign(0), _gradeToExecute(0){
    std::cout << "Empty form" << std::endl;
}

AForm::AForm(std::string name, const int gts, const int gte): _name(name), _sign(false), _gradeToSign(gts), _gradeToExecute(gte){
    try
    {
        if (gts < 1 || gte < 1)
            throw(GradeTooHighExeption());
        else if (gts > 150 || gte > 150)
            throw(GradeTooLowExeption());
    }
    catch(GradeTooHighExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooLowExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "A new form " << this->_name << " has created!" << std::endl;
}

AForm::~AForm(){
    std::cout << "Form " << this->_name << " is destroyed." << std::endl;
}

//AForm::AForm(const AForm&copy): _name(copy._name), _sign(copy._sign), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
//    if(this != &copy)
//        *this = copy;
//}
//
AForm &AForm::operator=(const AForm &copy){
    *this = copy;
    return (*this);
}

std::string AForm::getName() const{
    return (this->_name);
}

int AForm::getSign() const{
    if (this->_sign == true)
        return (1);
    else
        return (0);
}

int   AForm::getGradeToSign() const{
    return (this->_gradeToSign);
}

int   AForm::getGradeToExecute() const{
    return (this->_gradeToExecute);
}

void    AForm::beSigned(Bureaucrat &bureau){
    try
    {
        if(bureau.getGrade() <= this->_gradeToSign)
        {
            this->_sign = true;
            std::cout << bureau.getName() << " IS PUTTING HIS SIGN ON " << this->_name << std::endl;
        }
        else
            throw(GradeTooHighExeption());
    }
    catch(GradeTooHighExeption &e) 
    {
        std::cerr << "error: " << e.what() << std::endl;
    }
}

void AForm::execute(Bureaucrat const &executor) const {
    try
    {
        if (!this->_sign)
            throw(NotSigned());
        else if (executor.getGrade() > this->_gradeToExecute)
            throw(GradeTooHighExeption());
        else if (executor.getGrade() <= this->_gradeToExecute)
            std::cout << "This form: " << this->_name << " has been executed!" << std::endl;
    }
    catch(NotSigned &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooHighExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }

}