/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:10:57 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 16:11:14 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << " Dog : default constructor is called " << std::endl;
    setType("Dog");
}

void Dog::makeSound() const 
{
    std::cout << "Wooffff" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog : destructor is called " << std::endl;
}