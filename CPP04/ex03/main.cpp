/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:40:30 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/23 16:39:23 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class IMateriaSource
// {
//     public:
//     virtual ~IMateriaSource() {}
//     virtual void learnMateria(AMateria*) = 0;
//     virtual AMateria* createMateria(std::string const & type) = 0;
// };

// class Materuasource : public IMateriaSource
// {
//     public:
//         Materuasource();
        
//         void learnMateria(AMateria*);
//         Void AMateria* createMateria(std::string const &type); 
// };


class AMateria
{
    protected:
        std::string _type;
    public:
    
    AMateria(std::string const & type);
    AMateria(AMateria const & other);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};







int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}