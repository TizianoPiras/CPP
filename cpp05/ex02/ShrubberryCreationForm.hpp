/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:50:56 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:50:57 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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