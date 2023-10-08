/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:19:15 by hamza             #+#    #+#             */
/*   Updated: 2023/10/07 20:56:28 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon(void)
{
    
}
void Weapon::setType(std::string _type)
{
    this->type = _type;
}
std::string& Weapon::getType()
{
    return (this->type);
}