/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:09:32 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:00:28 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " Cat : default constructor is called " << std::endl;
    setType("Cat");
}

Cat::Cat(Cat const & other)
{
    std::cout << "Cat : Copy constructor  is called" << std::endl;
    this->type = other.getType();
}
Cat & Cat::operator=(Cat const & other)
{
    std::cout << "Cat : copy assigment operatot is called" << std::endl;
    if (this != &other) {
        *this = other;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meeeoo" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat : destructor is called " << std::endl;
}