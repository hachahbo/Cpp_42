/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:30:56 by hamza             #+#    #+#             */
/*   Updated: 2023/12/09 19:08:33 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename T, typename U>
int  swap(T& a, U& b)
{
    T temp;

    if(typeid(a) != typeid(b))
    {
        std::cout << a << " and " << b <<  " they types are diffrent" << std::endl;
        return 0;
    }
    temp = a;
    a = b;
    b = temp;
    return(1);
}

template <typename T, typename U>
T min(T a, U b)
{
    if(typeid(a) != typeid(b))
    {
        std::cout << a << " and " << b <<  " they types are diffrent" << std::endl;
        return (0);
    }
    if(a < b)
        return(a);
    return(b);
}

template <typename T, typename U>
T max(T a, U b)
{
    if(typeid(a) != typeid(b))
    {
        std::cout << a << " and " << b <<  " they types are diffrent" << std::endl;
        return(0);
    }
    if(a > b)
        return(a);
    return(b); 
}

#endif