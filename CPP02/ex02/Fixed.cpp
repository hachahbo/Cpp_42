/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:25 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/18 20:58:04 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// const int Fixed::bits = 8;


Fixed::Fixed()
{
    this->fixNumber = 0;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	if( this != &other)
		this->fixNumber = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
}

Fixed::Fixed(const int value)
{
	this->fixNumber = value *  (1 << bits);
}

Fixed::Fixed(const float value)
{
	this->fixNumber = std::roundf(value *  (1 << bits));
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

//---------------comparaison-----------//

bool    Fixed::operator>( const Fixed &rhs ) const {
    return this->getRawBits() > rhs.getRawBits();
}

bool    Fixed::operator<( const Fixed &rhs ) const {
    return this->getRawBits() < rhs.getRawBits();
}

bool    Fixed::operator>=( const Fixed &rhs ) const {
    return this->getRawBits() >= rhs.getRawBits();
}

bool    Fixed::operator<=( const Fixed &rhs ) const {
    return this->getRawBits() <= rhs.getRawBits();
}

bool    Fixed::operator==( const Fixed &rhs ) const {
    return this->getRawBits() == rhs.getRawBits();
}

bool    Fixed::operator!=( const Fixed &rhs ) const {
    return this->getRawBits() != rhs.getRawBits();
}

//------------ arithmetic ---------------//

Fixed Fixed::operator+(const Fixed& other)  const {
		return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other)  const {
	return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other)  const {
	return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other)  const {
	return Fixed(this->toFloat() / other.toFloat());
}


// --------------- -------------------//

Fixed&   Fixed::operator++( void ) {
    ++this->fixNumber;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp.fixNumber = this->fixNumber++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->fixNumber;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp.fixNumber = this->fixNumber--;
    return tmp;
}

//-------------- Max-Min ----------------//

Fixed &Fixed::min( Fixed& a,  Fixed& b)  
{
	if(a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::max( Fixed& a,  Fixed& b)  
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}
