/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:10:57 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/22 20:07:08 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << " Dog : default constructor is called " << std::endl;
    setType("Dog");
    dogsBrain = new Brain();
}

Dog::Dog(Dog const & other)
{
    std::cout << "Dog : Copy construcrot is called" << std::endl;
    *this = other;
    return ;
}

Dog & Dog::operator=(Dog const & other)
{
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    *this = other;
    return *this;
}

void    Dog::makeSound() const 
{
    std::cout << "Wooffff" << std::endl;
}

Dog::~Dog()
{
    delete  dogsBrain;
    std::cout << "Dog : destructor is called " << std::endl;
}