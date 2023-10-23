/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CLapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:08:48 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:31:31 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assigment opertator is  called" << std::endl;
    this->name = other.name;
    this->HitPoints = other.HitPoints; 
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    return *this;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap's default constructor is called" << std::endl;
    this->name = "Defaul";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = other;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " is born"  << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    
}

void ClapTrap::attack(const std::string& target)
{
    if(this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
       std::cout << "the attack is failed because there is no enregy points " << std::endl; 
        this->EnergyPoints = 0;
       return ;
    }
    std::cout << "Claptrap " << this->name << " attacks "  << target << " causing " << this->AttackDamage <<  " points of damage! "  << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(int(amount) < 0)
    {
        std::cout << "Negative value" << std::endl;
        return ;
    }
    if(this->HitPoints <= (int)amount)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        this->HitPoints = 0;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " is takes " << amount << " points damage " << std::endl;
    this->HitPoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if(int(amount) < 0)
    {
        std::cout << "Negative value" << std::endl;
        return ;
    }
    if(this->EnergyPoints <= 0  || this->HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy"  << std::endl;
        this->EnergyPoints = 0;
        return ;
    }
    std::cout << "ClapTrap " << this->name <<  " is repared amount : " << amount << std::endl;
    EnergyPoints -= 1; 
    HitPoints += (int)amount;
}