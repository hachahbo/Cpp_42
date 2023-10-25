/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:10:16 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 09:05:57 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & other);
        Dog & operator=(Dog const & other);
        ~Dog();
        void makeSound()  const;
};
#endif