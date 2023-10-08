/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:49:29 by hamza             #+#    #+#             */
/*   Updated: 2023/10/07 20:56:50 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANB_HPP
#define  HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
        private:
            std::string name;
            Weapon *_Weapon;
        public:
            HumanB(std::string _name);
            ~HumanB();
            void attack();     
            void    setWeapon(Weapon &Wweapon);
};

#endif