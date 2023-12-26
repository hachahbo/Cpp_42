/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:58:10 by hamza             #+#    #+#             */
/*   Updated: 2023/11/21 16:47:42 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->str = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : AForm("RobotomyRequestForm", 72, 45)
{
    this->str = other.str;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    return(*this);
} 

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getExeSign())
        throw AForm::GradeTooLowException();
   else
   {    
        static int i = 0;
        if(i % 2  == 0)
            std::cout << "BZZZZZT! " << this->str << " has been robotomized!" << std::endl;
        else
            std::cout << this->str << " : teh a robotppmy failed " << std::endl;
        i++;    
   }
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}