/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:32:45 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/23 17:24:44 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{   
    this->_type = "Ice";
    std::cout << "Ice  Materia is created " << std::endl;
}

Ice::Ice(Ice const & other)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = other;
    return;
}

Ice & Ice::operator=(Ice const & other)
{
    
   std::cout << "Ice : Copy assignment operator called" << std::endl;
    *this = other;
    return *this;
}

AMateria* Ice::clone() const
{
    std::cout << "Ice : the Materia  is colned" << std::endl;
    return (AMateria*) this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "Ice  shooot an ice bolt at" << target.getName() << std:: endl;
}

Ice::~Ice()
{
    std::cout << "Ice Materia is destroyed" << std::endl;
}