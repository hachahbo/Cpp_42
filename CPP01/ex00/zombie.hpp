/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:03:13 by hamza             #+#    #+#             */
/*   Updated: 2023/10/11 18:56:29 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE__HPP
#define ZOMBIE__HPP

#include <iostream>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie(void);
        Zombie(std::string name);
        void anounce(void);
};
    void randomChump( std::string name );
    Zombie* newZombie( std::string name );
#endif