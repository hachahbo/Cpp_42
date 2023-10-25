/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:52:58 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 10:04:44 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"


 MateriaSource::MateriaSource()
 {
    std::cout << " MateriaSource : Default constructor is called" << std::endl;
 }
MateriaSource::MateriaSource(MateriaSource const & other)
{
    int i = 0;
    std::cout << "MateriaSource : copy constructor is called " << std::endl;
    while (i < 4)
    {
        this->materia[i] = other.materia[i];
        i++;
    }    
}
MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
    
    int i = 0;
    std::cout << "MateriaSource : assignment operator is called " << std::endl;
      if (this != &other)
    {
        while (i < 4)
        {
            this->materia[i] = other.materia[i];
            i++;
        }
    }
    return *this;  
}
AMateria* MateriaSource::getMateria(std::string const & type)
{
    int i = 0;
    while(i < 4)
    {
        if(materia[i] && materia[i]->getType() == type)
            return(materia[i]->clone());
        i++;
        std::cout << "the materia" <<  materia[i]->getType() << "has been colned" << std::endl;
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource  : Destructor is  called" <<std::endl;
     for (int i = 0; i < 4; i++)
        if (materia[i])
            delete materia[i];
}

void    MateriaSource::learnMateria( AMateria* mat )
{
    int i = 0;
    while(i < 4)
    {
        if(this->materia[i] == NULL)
        {
            materia[i] = mat;
            std::cout << "the Materia is add ot Materie Source" << std::endl;   
            return ;
        }
        i++;
    }
    std::cout << "iventory is full you can't add  any Materia " << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{   
    int i = 0;
    while(i < 4)
    {
        if(materia[i] && materia[i]->getType() == type)
        {
            std::cout << "the materia" <<  materia[i]->getType() << "has been colned" << std::endl;
            return(materia[i]->clone());
        }
        i++;
    }
    std::cout << " the materia doesn't exist" << std::endl;
    return NULL;
}