/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:51:32 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:33 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
    std::cout << "You create a void robotomy form." << std::endl << "Well Done." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "You destroy this " << this->getName() << " form." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 72, 45), _target(target){
    std::cout << "Drill Noise ... drrrrr .. drrrrr .." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (this->getSign() == 0)
        throw(NotSigned());
    else if (executor.getGrade() > this->getGradeToExecute())
        throw(GradeTooLowExeption());
    else if (executor.getGrade() <= this->getGradeToExecute())
    {
        if (rand() % 2 == 0)
            std::cout << this->_target << " has robotomized." << std::endl;
        else
            std::cout << "Robotomy has failed." << std::endl;
    }
}
