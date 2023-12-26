/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:37:08 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 15:09:44 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}
Serializer::Serializer(const Serializer &other)
{
        *this = other;
}
Serializer&  Serializer::operator=(const Serializer &other)
{
    if(this != &other)
        *this = other;
    return (*this);
}
Serializer::~Serializer()
{
    
}
uintptr_t Serializer::serializer(Data * ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}