/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:15:35 by hamza             #+#    #+#             */
/*   Updated: 2023/10/07 20:55:14 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::~HumanA(void)
{
    std::cout << "- HumanA " << this->name << " is dead" << std::endl;
}
HumanA::HumanA(std::string _name, Weapon &weapon): name(_name), _Weapon(weapon)
{
    std::cout << "- HumanA " << this->name << " is created with ";
    std::cout << this->_Weapon.getType() << std::endl;
}
void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " \
     << this->_Weapon.getType() << std::endl;
}
void HumanA::setWeapon(Weapon W_eapon)
{
    this->_Weapon = W_eapon;
}