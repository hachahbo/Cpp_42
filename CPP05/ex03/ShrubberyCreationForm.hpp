/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:02:12 by hamza             #+#    #+#             */
/*   Updated: 2023/11/21 16:17:48 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
    private:
    std::string str;

    public:
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(const ShrubberyCreationForm & other);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor) const;
};
#endif