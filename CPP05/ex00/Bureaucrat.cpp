/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:30:11 by hamza             #+#    #+#             */
/*   Updated: 2023/11/22 12:19:25 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor" << std::endl;
    this->name = "default";
    this->grade = 0;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat constructor" << std::endl;
    this->name = name;
    this->grade = grade;
     if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "copy assignment operator";
    if(this != &other)
        this->grade = other.getGrade();
    return (*this);
}


std::string Bureaucrat::getName() const
{
    return(this->name);
}
void    Bureaucrat::setName(std::string _name)
{
    this->name = _name;
}
int Bureaucrat::getGrade() const
{
    return(this->grade);
}
void    Bureaucrat::setGrade(int _grade)
{
    this->grade = _grade;
}

void    Bureaucrat::incrementGrade()
{
    if(grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade += 1;
}
void    Bureaucrat::decrementGrade()
{
    if(grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade -= 1;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor" << std::endl;
}

std::ostream & operator<< (std::ostream & o, Bureaucrat const & other)
{
	o << other.getName() << " grade "<<   other.getGrade();
	return o;
}

