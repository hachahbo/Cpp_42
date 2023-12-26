/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:39:21 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 15:09:50 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data
{
    std::string  Name;
    int age;
};

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &other);
        Serializer& operator=(const Serializer &other);
        ~Serializer();       
    public:
        static uintptr_t serializer(Data * ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif