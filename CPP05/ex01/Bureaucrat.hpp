/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:30:18 by hamza             #+#    #+#             */
/*   Updated: 2023/11/18 11:37:34 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        std::string name;
        int grade;
    public :

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat & operator=(Bureaucrat const &other);
    ~Bureaucrat();

    void setName(std::string _name);
    void setGrade(int _grade);
    std::string getName() const;
    int getGrade() const;
    void    incrementGrade();
    void    decrementGrade();
    void    signForm(Form &form);
    
    class GradeTooHighException;
    class GradeTooLowException;
    
};
class Bureaucrat::GradeTooHighException: public std::exception
{
    public : 
        virtual const char* what() const throw () 
        {return "grade too high exeption";}
};
class Bureaucrat::GradeTooLowException: public std::exception
{
    public : 
        virtual const char* what() const throw () 
        {return "grade too low exeption";}
};
std::ostream & operator<< (std::ostream & o, Bureaucrat const & Value);
#endif
