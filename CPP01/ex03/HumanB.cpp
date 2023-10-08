/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:21:08 by hamza             #+#    #+#             */
/*   Updated: 2023/10/07 20:57:21 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string _name) :name(_name) , _Weapon(NULL)
{
    std::cout << "HumanB " << this->name << " is created with out weapon" << std::endl; 
}
HumanB::~HumanB(void)
{
    std::cout << "HumanB " << this->name << " is dead " << std::endl;     
}
void    HumanB::setWeapon(Weapon &Wweapon)
{
    this->_Weapon = &Wweapon;
}
void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " \
        << this->_Weapon->getType() << std::endl;
} 