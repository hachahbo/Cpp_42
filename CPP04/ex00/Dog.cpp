/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:10:57 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:00:02 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << " Dog : default constructor is called " << std::endl;
    setType("Dog");
}
Dog::Dog(Dog const & other)
{
    std::cout << "Dog : Copy constructor  is called" << std::endl;
    this->type = other.getType();
}
Dog & Dog::operator=(Dog const & other)
{
    std::cout << "Dog : copy assigment operatot is called" << std::endl;
     if (this != &other) {
        *this = other;
     }
    return *this;
}
void Dog::makeSound() const 
{
    std::cout << "Wooffff" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog : destructor is called " << std::endl;
}