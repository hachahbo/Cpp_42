/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:05:58 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:48:21 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        long HitPoints;
        long EnergyPoints;
        long AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap &operator=(const ClapTrap &other);
        ClapTrap(const ClapTrap& other);
        ~ClapTrap();
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
};

#endif