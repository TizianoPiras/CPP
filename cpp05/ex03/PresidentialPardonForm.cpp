/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:51:26 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:27 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    std::cout << "You create a void presidential pardon form." << std::endl << "Well Done." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "You destroy this " << this->getName() << " form." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 25, 5), _target(target){
    std::cout << "Presidential pardon for " << this->_target << " is emitted!" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (this->getSign() == 0)
        throw(NotSigned());
    else if (executor.getGrade() > this->getGradeToExecute())
        throw(GradeTooLowExeption());
    else if (executor.getGrade() <= this->getGradeToExecute())
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebox." << std::endl << "Signed by: " << executor.getName() << std::endl;
}
