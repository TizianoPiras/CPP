/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:51:21 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/12 12:24:17 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Internal.hpp"

int main()
{
    Bureaucrat Pluto("Pluto", 1);
    Internal prova;
    AForm *refForm;

    refForm = prova.makeForm("presidential pardon", "Pluto");
    prova.execute(Pluto);
    if (refForm)
    {
        refForm->beSigned(Pluto);
        refForm->execute(Pluto);
        delete refForm;
    }
    else
    {
        std::cerr << "Invalid type of form, please retry. (shrubberry creation, robotomy request, presidential pardon)" << std::endl;
        return 0;
    }
}