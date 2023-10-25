/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:31:21 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:02:59 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << " Brain : Default constructor is called and allocated" << std::endl;
}

Brain::Brain(Brain const & other)
{
    std::cout << "Brain : Copy construcrot is called" << std::endl;
    *this = other;
    return ;
}
Brain & Brain::operator=(Brain const & other)
{
    std::cout << "Brain : Copy assignment operator called" << std::endl;
     if (this != &other)
    {
        *this = other;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << " default destructor is called" << std::endl;
}