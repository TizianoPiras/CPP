/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:51:38 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:39 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

ShrubberryCrationForm::ShrubberryCrationForm(){
    std::cout << "You create a void shrubberry form." << std::endl << "Well Done." << std::endl;
}

ShrubberryCrationForm::~ShrubberryCrationForm(){
    std::cout << "You destroy this " << this->getName() << " form." << std::endl;
}

ShrubberryCrationForm::ShrubberryCrationForm(std::string target): AForm((target + "_shrubberry"), 145, 137), _target(target){
    std::cout << "Shrubberry is checking validations!" << std::endl;
}

void ShrubberryCrationForm::execute(Bureaucrat const &executor) const{
    std::string fileName = this->_target + "_shrubberry";
    if (this->getSign() == 0)
        throw(NotSigned());
    else if (executor.getGrade() > this->getGradeToExecute())
        throw(GradeTooLowExeption());
    else if (executor.getGrade() <= this->getGradeToExecute())
    {
        std::ofstream file(fileName.c_str());
        if(file.is_open())
        {
            file << "  /    \\__" << std::endl;
            file << "{           }" << std::endl;
            file << "  \\  -  -  /" << std::endl;
            file << "      \\ \\" << std::endl;
            file << "       | |" << std::endl;
            file << "       | |" << std::endl;
            file << "       |_|" << std::endl;

            file.close();
            std::cout << fileName << " is created" << std::endl;
        }
        else
            std::cerr << "A problem with file creation occurred." << std::endl;
    }
}
