/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:43:19 by hamza             #+#    #+#             */
/*   Updated: 2023/12/08 22:09:38 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
    virtual void print() 
    {
        std::cout << "base class" << std::endl;
    }
};
class A : public Base{};
class B : public Base{};
class C : public Base{};
#endif