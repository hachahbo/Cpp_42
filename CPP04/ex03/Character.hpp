/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:07:42 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/23 19:17:27 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
      protected:
        std::string name;
        AMateria *_invotery[4];
    public:
    virtual ~Character() {}
    std::string const & getName() const ;
    void equip(AMateria* m) const;
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m) const
{
    int i = 0;
    while(i < 4)
    {
        if(this->_invotery[i] == NULL)
        {
            this->_invotery[i] = m;
            std::cout << " the Materai" << m->getType() << " is equiped" << std::endl;
            i++;
            return ;
        }
    }
    std::cout << "the inventory is full you can't add the Materia" << std::endl;    
}


void Character::unequip(int idx)
{
    int i;

    // while( )
}

void Character::use(int idx, ICharacter& target)
{
    
}
#endif