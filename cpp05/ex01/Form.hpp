/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:50:12 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:50:13 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

    private:
        const std::string _name;
        bool  _sign;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        Form(std::string name, const int gts, const int gte);
        ~Form();
        //Form(const Form&copy);
        //Form &operator=(const Form&copy);
        std::string getName() const;
        bool        getSign();
        int   getGradeToSign() const;
        int   getGradeToExecute() const;
        void        beSigned(Bureaucrat &bureau);
        

        class gradeTooHighExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade required is too high";
                }
        };
        class gradeTooLowExeption: public std::exception 
        {
            public:
                const char  *what() const throw(){
                    return "Grade required is too low";
                }
        };
};
std::ostream &operator<<(std::ostream os, Form &copy);








#endif