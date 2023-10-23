/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:24:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:41:53 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    {
        ClapTrap obj("hamza");

        obj.attack("staff");
        obj.takeDamage(2);
        obj.beRepaired(5);
        ClapTrap obj1("test");
    }
    {
        std::cout << "-------------------------\n";
        ScavTrap obj("hamzah");
        obj.attack("staff");
        obj.takeDamage(2);
        obj.beRepaired(5);
        obj.guardGate();
    }
}
