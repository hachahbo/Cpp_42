/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPadronForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:34:16 by hamza             #+#    #+#             */
/*   Updated: 2023/11/22 17:20:05 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPadronForm.hpp"

PresidentialPadronForm::PresidentialPadronForm(std::string target) : AForm("PresidentialPadronForm", 25, 5)
{
    this->str = target;
}

PresidentialPadronForm::PresidentialPadronForm(const PresidentialPadronForm & other) : AForm("PresidentialPadronForm", 25, 5)
{
    this->str = other.str;
}
PresidentialPadronForm & PresidentialPadronForm::operator=(const PresidentialPadronForm & other)
{
    return(*this);
}

void PresidentialPadronForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getExeSign())
        throw AForm::GradeTooLowException();
   else
        std::cout << this->str << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}

PresidentialPadronForm::~PresidentialPadronForm()
{
}