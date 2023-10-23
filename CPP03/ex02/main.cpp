/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:24:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:41:27 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    {
        ClapTrap obj("hamza");

        obj.attack("staff");
        obj.takeDamage(2);
        obj.beRepaired(5);
    }
    {
        std::cout << "-------------------------\n";
        ScavTrap obj("la3ib");
        obj.attack("staff");
        obj.takeDamage(2);
        obj.beRepaired(5);
    }
    {
        std::cout << "-------------------------\n";
        FragTrap obj("teste");
        obj.attack("staff");
        obj.takeDamage(100);
        obj.beRepaired(3);
        obj.highFivesGuys();
    }
}
