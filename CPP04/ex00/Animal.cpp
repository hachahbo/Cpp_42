/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:06:40 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 16:06:58 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "default";
    std::cout << "default constructor of   is called" << std::endl;
}

Animal::Animal(const Animal & other)
{
    std::cout << "copy constructor is called" << std::endl;
     *this = other;
     return;
}
void Animal::setType(std::string _type)
{
    this->type = _type;
}
std::string Animal::getType() const
{
    return(this->type);
}

Animal & Animal::operator=(const Animal & other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->setType(other.type);
    return *this;
}
void Animal::makeSound() const 
{
    std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor is called" << std::endl;
}