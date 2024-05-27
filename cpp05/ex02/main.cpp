/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:50:36 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:50:37 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Pippo("Pippo", 5);
    ShrubberryCrationForm Three("pippo_three");
    RobotomyRequestForm Robot("pippo_robot");
    PresidentialPardonForm Pardon("pippo_pardon");
    Three.beSigned(Pippo);
    Robot.beSigned(Pippo);
    Pardon.beSigned(Pippo);
    Three.execute(Pippo);
    Robot.execute(Pippo);
    Pardon.execute(Pippo);


}