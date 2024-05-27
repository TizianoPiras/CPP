/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:51:10 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:51:11 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat {

    private:
        const   std::string _name;
        int     _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;
        int         operator++(int grade);
        int         operator--(int grade);
        void        signForm(AForm &form);
        class GradeTooHighExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade too high";
                }
        };
        class GradeTooLowExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade too low";
                }
        };
};


std::ostream &operator<<(std::ostream os,  Bureaucrat &copy);








#endif