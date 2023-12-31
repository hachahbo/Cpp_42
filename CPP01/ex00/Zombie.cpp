/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:55:15 by hamza             #+#    #+#             */
/*   Updated: 2023/10/10 17:51:35 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

 Zombie::Zombie(std::string name)
{
    this->name = name;
};

 Zombie::Zombie(void) : name("default") 
 {
    
 }
 
void    Zombie::anounce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}