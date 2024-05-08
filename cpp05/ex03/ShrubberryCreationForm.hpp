#ifndef SHRUBBERRYCRATIONFORM_HPP
# define SHRUBBERRYCRATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberryCrationForm : public AForm{
    private:
        std::string _target;
    public:
        ShrubberryCrationForm();
        ~ShrubberryCrationForm();
        ShrubberryCrationForm(std::string target);
        void    execute(Bureaucrat const &executor) const;
};
#endif