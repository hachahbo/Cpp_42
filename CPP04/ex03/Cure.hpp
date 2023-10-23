/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:38:26 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/23 17:11:02 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    private:
            
    public:
        Cure();
        ~Cure();
        Cure(Cure const & other);
        Cure & operator=(Cure const & other);

        AMateria* clone() const;
        void use(ICharacter& target);

};


#endif