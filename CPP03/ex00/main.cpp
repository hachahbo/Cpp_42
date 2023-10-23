/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:24:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 09:47:01 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj("hamza");

    obj.attack("staff");
    obj.attack("staff");
    obj.takeDamage(-10);
    obj.beRepaired(5);
}
