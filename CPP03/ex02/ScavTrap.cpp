/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:02 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:31:50 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ClapTrap's default constructor is called" << std::endl;
    this->name = "Default";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}
ScavTrap::ScavTrap(std::string name ) : ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap contructor is called" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
   if(this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
       std::cout << "the attack is failed because there is no enregy points " << std::endl; 
       return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks "  << target << " causing " << this->AttackDamage <<  " points of damage! "  << std::endl;
    this->EnergyPoints--;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name <<  " is now in Gate  Keeper mode" << std::endl;
}
