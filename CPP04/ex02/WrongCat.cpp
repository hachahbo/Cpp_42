/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:37:27 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/22 15:54:24 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << " WrongCat : default constructor is called " << std::endl;
    setType("WrongCat");
}

void WrongCat::makeSound() const
{
    std::cout << "Meeeoo" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destructor is called " << std::endl;
}