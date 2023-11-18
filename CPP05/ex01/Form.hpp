/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:51:00 by hamza             #+#    #+#             */
/*   Updated: 2023/11/18 11:46:25 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
    std::string name;
    bool sign;
    const int gradeSign;
    const int exeSign;
  public:
    Form(std::string _name, const  int _gradeSign);
    Form(Form const &other);
    Form & operator=(const Form &other);
    ~Form();
    
    void setName(std::string _name);
    
    void besigned(Bureaucrat bureaucrat);
    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getExeSign() const;
        
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char * what() const throw()
        {
            return "Form : Grade too high";
        }
    };
    class GradeTooLowException : public std::exception
    {
        public :
        virtual const char * what() const throw()
        {
            return "Form : Grade too low";
        }
    };
};

std::ostream & operator<< (std::ostream & o, Form const & Value);

#endif