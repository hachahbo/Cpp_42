/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:01:09 by hamza             #+#    #+#             */
/*   Updated: 2023/11/20 15:36:29 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

class AForm;

class RobotomyRequestForm : public AForm
{
    private:
    std::string str;

    public:
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(const RobotomyRequestForm & other);
    RobotomyRequestForm & operator=(const RobotomyRequestForm & other);
    ~RobotomyRequestForm();
    
    void execute(Bureaucrat const & executor) const;

};
#endif