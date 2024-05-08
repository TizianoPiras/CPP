#include "Form.hpp"

Form::Form(): _sign(false), _gradeToSign(0), _gradeToExecute(0){
    std::cout << "Empty form" << std::endl;
}

Form::Form(std::string name, const int gts, const int gte): _name(name), _sign(false), _gradeToSign(gts), _gradeToExecute(gte){
    try
    {
        if (gts < 1 || gte < 1)
            throw(gradeTooHighExeption());
        else if (gts > 150 || gte > 150)
            throw(gradeTooLowExeption());
    }
    catch(gradeTooHighExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(gradeTooLowExeption &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "A new form " << this->_name << " has created!" << std::endl;
}

Form::~Form(){
    std::cout << "Form " << this->_name << " is destroyed." << std::endl;
}

//Form::Form(const Form&copy): _name(copy._name), _sign(copy._sign), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
//    if(this != &copy)
//        *this = copy;
//}
//
//Form &Form::operator=(const Form &copy){
//    *this = copy;
//    return (*this);
//}

std::string Form::getName() const{
    return (this->_name);
}

bool Form::getSign(){
    return (this->_sign);
}

int   Form::getGradeToSign() const{
    return (this->_gradeToSign);
}

int   Form::getGradeToExecute() const{
    return (this->_gradeToExecute);
}

void    Form::beSigned(Bureaucrat &bureau){
    try
    {
        if(bureau.getGrade() <= this->_gradeToSign)
        {
            this->_sign = true;
            std::cout << bureau.getName() << " IS PUTTING HIS SIGN ON " << this->_name << std::endl;
        }
        else
            throw(gradeTooHighExeption());
    }
    catch(gradeTooHighExeption &e) 
    {
        std::cerr << "error: " << e.what() << std::endl;
    }
}
