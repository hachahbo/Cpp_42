/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:15:01 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/23 17:08:47 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    private:
            
    public:
        Ice();
        ~Ice();
        Ice(Ice const & other);
        Ice & operator=(Ice const & other);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif