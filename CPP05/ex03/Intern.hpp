/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:36:43 by hamza             #+#    #+#             */
/*   Updated: 2023/11/23 12:30:39 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class AForm;

class Intern
{
    private:
    
    public:
        Intern();
        Intern(Intern const & other);
        Intern & operator=(Intern const & other);
        ~Intern();

        AForm *makeForm(std::string name, std::string target);
};

#endif