/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:52:37 by hamza             #+#    #+#             */
/*   Updated: 2023/10/09 12:22:23 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name("default")
{
    
}
int main()
{
    int n = 10;
    Zombie  *zombie = zombieHorde(n, "hamza");
    int i = 0;
    while(i < n)
    {
        zombie[i].anounce();
        std::cout << std::endl;
        i++;
    }
    delete  [] zombie;
}