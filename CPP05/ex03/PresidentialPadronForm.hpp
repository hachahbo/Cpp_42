/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPadronForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:18:23 by hamza             #+#    #+#             */
/*   Updated: 2023/11/21 16:12:32 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPADRONFORM_HPP
#define PRESIDENTIALPADRONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class AForm;

class PresidentialPadronForm : public AForm
{
    private:
    std::string str;

    public:
    PresidentialPadronForm(std::string name);
    PresidentialPadronForm(const PresidentialPadronForm & other);
    PresidentialPadronForm & operator=(const PresidentialPadronForm & other);
    ~PresidentialPadronForm();
    
    void execute(Bureaucrat const & executor) const;
};
#endif