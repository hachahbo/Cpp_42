/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:02:34 by hamza             #+#    #+#             */
/*   Updated: 2023/10/09 14:53:24 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <iostream>

int main()
{
    std::string name;
    std::cout << " enter the zombie will be allocated in stack : ";
    std::cin >> name;
    randomChump(name);

    std::cout << "enter the 2nd zombie will be allocated in heap : ";
    std::cin >> name;
    Zombie *zomb2 = newZombie(name);
    zomb2->anounce();
    delete zomb2;
    std::cout << "------" << std::endl;
}