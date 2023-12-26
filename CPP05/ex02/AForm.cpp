/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:55:57 by hamza             #+#    #+#             */
/*   Updated: 2023/11/18 19:51:24 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string _name, const int _gradeSign, int _exeSign) : name(_name) , gradeSign(_gradeSign) , exeSign(_exeSign)
{
    std::cout << "AForm : constructor is called" << std::endl;
    if(this->gradeSign < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if(gradeSign > 150)
        throw AForm::GradeTooLowException();
        
}
AForm::AForm(AForm const &other) : name(other.getName()) , gradeSign(other.getExeSign()) , exeSign(other.getExeSign())
{
        std::cout<< "copy constructor is called " << std::endl;
}
AForm & AForm::operator=(const AForm &other)
{
    if(this != &other)
        this->sign = other.getSigned();
    return(*this);
}
AForm::~AForm()
{
    std::cout << "AForm destructed is called" << std::endl;
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getSigned() const
{
    return(this->sign);
}
int AForm::getGradeSign() const
{
    return(this->gradeSign);
}
int AForm::getExeSign() const
{
    return(this->exeSign);
}
void AForm::setName(std::string _name)
{
    this->name = _name;
}
    
void AForm::besigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > gradeSign)
        throw AForm::GradeTooLowException();
    this->sign = true;
}

std::ostream & operator<< (std::ostream & o, AForm const & Value)
{
    std::cout << "AForm infos: " << std::endl;
    std::cout << "Name : " << Value.getName() << std::endl;
    std::cout << "GradeSign : " << Value.getGradeSign() << std::endl;
    std::cout << "ExeSign : " << Value.getExeSign() << std::endl;
    return o;
}
