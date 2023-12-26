/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:32:21 by hamza             #+#    #+#             */
/*   Updated: 2023/12/12 21:55:44 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void myFunction(T & value)
{
    std::cout << value << std::endl; 
}
template <typename T>
void iter(T *arr, T size, void (*f)(T &))
{
    int i = 0;
    while(i < size)
    {
        f(arr[i]);
        i++;
    }    
}

#endif

