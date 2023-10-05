/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:52:37 by hamza             #+#    #+#             */
/*   Updated: 2023/10/03 15:27:20 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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