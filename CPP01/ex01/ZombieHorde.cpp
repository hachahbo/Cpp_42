/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:46 by hamza             #+#    #+#             */
/*   Updated: 2023/10/03 15:24:05 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int i= 0;
    Zombie *zombieH  = new Zombie[N];
    while(i < N)
    {
        zombieH[i].setName(name);
        i++;
    }
    return (zombieH);
}