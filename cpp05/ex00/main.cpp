/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:49:55 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/20 12:49:56 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("pippo", 150);
    Bureaucrat b("solo", 1);

    a.operator++(a.getGrade());
    b.operator++(b.getGrade());

}