/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:55:57 by hamza             #+#    #+#             */
/*   Updated: 2023/11/18 19:51:24 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name, const int _gradeSign) : name(_name) , gradeSign(_gradeSign) , exeSign(0)
{
    std::cout << "Form : constructor is called" << std::endl;
    if(this->gradeSign < 1)
    {
        throw Form::GradeTooLowException();
    }
    else if(gradeSign > 150)
        throw Form::GradeTooHighException();
        
}
Form::Form(Form const &other) : name(other.getName()) , gradeSign(other.getExeSign()) , exeSign(other.getExeSign())
{
        std::cout<< "copy constructor is called " << std::endl;
}
Form & Form::operator=(const Form &other)
{
    if(this != &other)
        this->sign = other.getSigned();
    return(*this);
}
Form::~Form()
{
    std::cout << "Form destructed is called" << std::endl;
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSigned() const
{
    return(this->sign);
}
int Form::getGradeSign() const
{
    return(this->gradeSign);
}
int Form::getExeSign() const
{
    return(this->exeSign);
}
void Form::setName(std::string _name)
{
    this->name = _name;
}
    
void Form::besigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > gradeSign)
        throw Form::GradeTooHighException();
    this->sign = true;
}

std::ostream & operator<< (std::ostream & o, Form const & Value)
{
    std::cout << "Form infos: " << std::endl;
    std::cout << "Name : " << Value.getName() << std::endl;
    std::cout << "GradeSign : " << Value.getGradeSign() << std::endl;
    std::cout << "ExeSign : " << Value.getExeSign() << std::endl;
    return o;
}
