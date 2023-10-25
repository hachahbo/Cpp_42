/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:53:23 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:09:30 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"


AMateria & AMateria::operator=(const AMateria & other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->_type = other.getType();
    return *this;
}

AMateria::AMateria() : _type("")
{
    std::cout << "Default  AMateria " << this->_type << "is created" << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria " << this->_type << "is created" << std::endl;
}

AMateria::AMateria(AMateria const & other)
{
    std::cout  << "AMetria " << this->_type << " copy constructor" << std::endl;
    *this = other;
}
std::string const & AMateria::getType() const
{
    return (this->_type);
}
AMateria::~AMateria()
{
    std::cout << "AMateria :  Destructed is called " << std::endl;
}

void AMateria::use(ICharacter& target)
{
    std::cout << " the Materia " << this->getType() << " use on " << target.getName() << std::endl;
}

AMateria * AMateria::clone() const
{
    return (AMateria*) this;
}
