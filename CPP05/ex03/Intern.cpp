/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:49:55 by hamza             #+#    #+#             */
/*   Updated: 2023/11/23 12:38:12 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPadronForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    
}
Intern::Intern(Intern const & other)
{
    *this  = other;
}
Intern & Intern::operator=(Intern const & other)
{
    if(this != &other)
        *this  = other;
    return(*this);
}
Intern::~Intern()
{
    
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string nameForms[] = {"PresidentialPadronForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm *objs[] = {new PresidentialPadronForm(target) ,new RobotomyRequestForm(target) , new ShrubberyCreationForm(target)};
    int i = 0;

    while(i < 3)
    {
        if(!name.compare(nameForms[i]))
        {
            std::cout << "Intern creates " << name << std::endl;
            return(objs[i]);
        }
        i++;
    }
    std::cout << "Intern can't creates " << name << std::endl;
    return((NULL));
        
}