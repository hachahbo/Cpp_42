/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:51:01 by hamza             #+#    #+#             */
/*   Updated: 2023/10/07 20:55:32 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &_Weapon;
    public:
        HumanA(std::string _name, Weapon &_Weapon);
        ~HumanA();
        void attack();
        void    setWeapon(Weapon W_eapon);
                
};

#endif