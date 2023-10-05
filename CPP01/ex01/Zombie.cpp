/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:26:57 by hamza             #+#    #+#             */
/*   Updated: 2023/10/03 15:27:11 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::anounce()
{
    std::cout << name <<" : BraiiiiiiinnnzzzZ...";
}