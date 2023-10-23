/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:44 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/13 14:30:36 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixNumber;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed &other);
    	~Fixed();
		void setRawBits( int const raw );
		int getRawBits(void) const;
};


#endif