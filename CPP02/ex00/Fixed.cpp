/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:25 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/13 14:29:41 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    this->fixNumber = 0;
}
Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if( this != &other)
		this->fixNumber = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->fixNumber = raw; 
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}