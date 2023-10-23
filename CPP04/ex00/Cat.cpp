/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:09:32 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/21 16:09:41 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " Cat : default constructor is called " << std::endl;
    setType("Cat");
}

void Cat::makeSound() const
{
    std::cout << "Meeeoo" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat : destructor is called " << std::endl;
}