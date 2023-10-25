/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:19:29 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:03:55 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name)
{
    this->name = name;
}
Character::Character()
{
    std::cout << "Character : Default constructor is called" << std::endl;
    this->name = "default";
}
Character::Character(Character const & other)
{
    std::cout << "Character : Copy constructor is called" << std::endl;
    this->name = other.getName();
    return ;
}

Character & Character::operator=(Character const & other)
{
      std::cout << "Character : assignment operator  is called" << std::endl;  
    if (this != &other)
    {
        *this = other;
    }
      return *this;
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    int i = 0;
    while(i < 4)
    {
    // printf("->>>>>>>>>>>>>>>>\n");
        if(this->_invotery[i] == NULL)
        {
            this->_invotery[i] = m;
            std::cout << " the Materai" << m->getType() << " is equiped" << std::endl;
            return ;
        }
            i++;
    }
    std::cout << "the inventory is full you can't add Any Materia" << std::endl;    
}


void Character::unequip(int idx)
{
    if(_invotery[idx]!= NULL)
    {
        delete _invotery[idx];
        _invotery[idx] = NULL;
        std::cout << "the Materia idex : " << idx <<" is unequiped " << std::endl;
        return ;
    }
    std::cout << "the Materia doesn't exist" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (_invotery[idx])
    {
        std::cout << "the Character " << this->name << " use  the weapon " << this->_invotery[idx]->getType() << " on  target :" << target.getName() <<std::endl;
        return ;
    }
    std::cout << "the character  can't use  the weapon " << std::endl; 
}

Character::~Character()
{
    std::cout  << "Character " << this->getName() << " is destroyed"<< std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_invotery[i])
            delete this->_invotery[i];
}