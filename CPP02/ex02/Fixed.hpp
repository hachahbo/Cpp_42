/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:44 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/18 20:53:36 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixNumber;
        static const int bits = 8;
    public:
        //------------  constructors  --------------//
            Fixed();
            Fixed(const int value);
            Fixed(const float value);
            Fixed(const Fixed& other);
            Fixed &operator=(const Fixed &other);
            ~Fixed();
        
        //----------- member functions ------------//
            void setRawBits( int const raw );
            int getRawBits(void) const;
            float toFloat( void ) const;
            int toInt( void ) const;
        //------------ comparaison --------------//
        bool    operator>( const Fixed &rhs ) const;
        bool    operator==( const Fixed &rhs ) const;
        bool    operator!=( const Fixed &rhs ) const;
        bool    operator<=( const Fixed &rhs ) const;
        bool    operator>=( const Fixed &rhs ) const; 
        bool    operator<( const Fixed &rhs ) const;
        //------------ arithmetic ---------------//
        Fixed operator+(const Fixed& other)  const ;
        Fixed operator-(const Fixed& other)  const ;
        Fixed operator*(const Fixed& other)  const ;
        Fixed operator/(const Fixed& other)  const ;

        //--------------------------------///
        Fixed&  operator++( void ); // prefix
        Fixed   operator++( int ); // postfix
        Fixed&  operator--( void ); // prefix
        Fixed   operator--( int ); // postfix

        //-------------- Max-Min ----------------//
        static Fixed& min(Fixed& a,  Fixed& b);
        static Fixed& max( Fixed& a,  Fixed& b);
        static const Fixed& max( const Fixed &a, const Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        
};

std::ostream & operator<< (std::ostream & o, Fixed const & Value);

#endif