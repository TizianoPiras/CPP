/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Internal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:51:13 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:14 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Internal.hpp"

Internal::Internal(){
    std::cout << "Internal is crated." << std::endl;
}

Internal::~Internal(){
    std::cout << "Internal is destroyed." << std::endl;
}

AForm *Internal::makeForm(std::string name, std::string target){
    AForm *form;
    std::string parameter[4] = {"shrubberry", "robotomy", "presidential"};
    int i;
    for(i = 0; i < 3; i++)
    {
        if(!name.find(parameter[i])){
            break;
        }
    }
    try{
        switch (i)
        {
            case(0):
                form = new ShrubberryCrationForm(target);
                break;
            case(1):
                form = new RobotomyRequestForm(target);
                break;
            case(2):
                form = new PresidentialPardonForm(target);
                break;
            default:
                throw(FormNotFoundException());
                return NULL;
                break;
        }
    }
    catch(FormNotFoundException &e){
        std::cerr << e.what() << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}


void    Internal::execute(Bureaucrat const &executor) const{
    if(executor.getGrade() == 1)
        std::cout << "Hey boss!" << std::endl;
}

