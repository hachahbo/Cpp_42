/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:48:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:52:57 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap contructor is called" << std::endl;    
}
FragTrap::FragTrap()
{
    this->name  = "default";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap default contructor is called" << std::endl;    
}
 
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor is called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if(this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        std::cout << "FragTrap " << this->name << " is out of energy" << std::endl;
        this->EnergyPoints = 0;
        this->HitPoints = 0;
        return ;
    }
    std::cout << "FragTrap " << this->name << "high gives evreyone" << std::endl;
    this->EnergyPoints--;
}