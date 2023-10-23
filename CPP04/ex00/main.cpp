/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:23:52 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/22 20:16:15 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *x = new WrongAnimal();
    const WrongAnimal *a = new WrongCat();
    
   
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << a->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    a->makeSound();
    x->makeSound();
    

    delete i;
    delete j;
    delete meta;
    delete a;
    delete x;
    return (0);
}
