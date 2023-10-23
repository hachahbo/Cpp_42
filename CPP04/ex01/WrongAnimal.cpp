/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:32:23 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/22 17:05:56 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "default";
    std::cout << "Wrong Animal :default constructor of is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
    std::cout << "Wrong Animal : copy constructor is called" << std::endl;
     *this = other;
     return;
}
void WrongAnimal::setType(std::string _type)
{
    this->type = _type;
}
std::string WrongAnimal::getType() const
{
    return(this->type);
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
	std::cout << "Wrong Animal : Copy assignment operator called" << std::endl;
    this->setType(other.type);
    return *this;
}
void WrongAnimal::makeSound() const 
{
    std::cout << "Wrong Animal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal :Destructor is called" << std::endl;
}