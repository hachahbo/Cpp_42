/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:25 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/16 15:03:46 by hachahbo         ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	this->fixNumber = value *  (1 << bits);
	std::cout << "Int constructor is called" << std::endl;	
}

Fixed::Fixed(const float value)
{
	this->fixNumber = std::roundf(value *  (1 << bits));
	std::cout << "Float constructor is called"  << std::endl;	
}

int Fixed::getRawBits(void) const
{
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

std::ostream & operator<< (std::ostream & o, Fixed const & other)
{
	o << other.toFloat();
	return o;
}

float   Fixed::toFloat( void ) const
{
    return static_cast<float>(this->getRawBits() ) / ( 1 << bits );
}

int Fixed::toInt( void ) const
{
	return this->fixNumber >> bits;
}