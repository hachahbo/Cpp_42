/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:56:05 by hamza             #+#    #+#             */
/*   Updated: 2023/12/12 22:04:47 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
class MyAaccessexption : public std::exception {
    public :
    virtual const char * what() const throw()
    { return "not Found"; }
};

template <typename T>
void    easyFind(T & arr, int n)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr.at(i) == n)
        {
            std::cout << "Found" << std::endl;
            return ;
        }
    }
    throw MyAaccessexption();
}


#endif