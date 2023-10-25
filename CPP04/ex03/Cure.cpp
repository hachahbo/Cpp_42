/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:33:55 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:09:55 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{   
    this->_type = "cure";
    std::cout << "Cure  Materia is created " << std::endl;
}
Cure::Cure(Cure const & other)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = other;
    return;
}

Cure & Cure::operator=(Cure const & other)
{
    
   std::cout << "Cure : Copy assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

AMateria* Cure::clone() const
{
    std::cout << "Cure : the Materia  is cloned" << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "Cure  heals "<< target.getName() << "'s wounds" << std:: endl;
}

Cure::~Cure()
{
    std::cout << "Cure Materia is destroyed" << std::endl;
}