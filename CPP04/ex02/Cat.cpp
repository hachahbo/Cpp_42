/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:09:32 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/22 20:07:40 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " Cat : default constructor is called " << std::endl;
    setType("Cat");
    catsBrain = new Brain();
}

void Cat::makeSound() const
{
    std::cout << "Meeeoo" << std::endl;
}

Cat::Cat(Cat const & other)
{
    std::cout << "Cat : Copy construcrot is called" << std::endl;
    *this = other;
    return ;
}

Cat & Cat::operator=(Cat const & other)
{
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    *this = other;
    return *this;
}

Cat::~Cat()
{
    delete  catsBrain;
    std::cout << "Cat : destructor is called " << std::endl;
}