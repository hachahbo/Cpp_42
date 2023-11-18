/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:30:18 by hamza             #+#    #+#             */
/*   Updated: 2023/11/18 11:52:22 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
// #include <stdexcept>


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

    std::string getName() const;
    void    setName(std::string _name);
    int     getGrade() const;
    void    setGrade(int _grade);
    void    incrementGrade();
    void    decrementGrade();
    
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
