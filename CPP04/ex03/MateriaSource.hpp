/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:00:13 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/25 09:24:11 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource
{
    private: 
    AMateria* materia[4];
                  
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & other);
        MateriaSource & operator=(MateriaSource const & other);
        ~MateriaSource();
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        AMateria* getMateria(std::string const & type);
        
};

#endif