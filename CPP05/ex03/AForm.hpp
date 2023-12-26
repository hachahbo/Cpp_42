/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:51:00 by hamza             #+#    #+#             */
/*   Updated: 2023/11/21 16:31:29 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
  private:
    std::string name;
    bool sign;
    const int gradeSign;
    const int exeSign;
  public:
    AForm(std::string _name, const  int _gradeSign, int _exeSign);
    AForm(AForm const &other);
    AForm & operator=(const AForm &other);
    virtual ~AForm();
    
    void setName(std::string _name);
    
    void besigned(const Bureaucrat &bureaucrat);
    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getExeSign() const;
    virtual void execute(Bureaucrat const & executor) const = 0;
        
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char * what() const throw()
        {
            return "AForm : Grade too high";
        }
    };
    class GradeTooLowException : public std::exception
    {
        public :
        virtual const char * what() const throw()
        {
            return "AForm : Grade too low";
        }
    };
};

std::ostream & operator<< (std::ostream & o, AForm const & Value);

#endif