/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:37:27 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:02:06 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << " WrongCat : default constructor is called " << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & other)
{
    std::cout << "WrongCat : Copy constructor  is called" << std::endl;
    this->type = other.getType();
}
WrongCat & WrongCat::operator=(WrongCat const & other)
{
    std::cout << "WrongCat : copy assigment operatot is called" << std::endl;
     if (this != &other) {
        *this = other;
     }
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout << "Meeeoo" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destructor is called " << std::endl;
}