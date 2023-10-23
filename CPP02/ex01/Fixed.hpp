/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:44 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/14 15:24:52 by hachahbo         ###   ########.fr       */
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
};

std::ostream & operator<< (std::ostream & o, Fixed const & Value);

#endif