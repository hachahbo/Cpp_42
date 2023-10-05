/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:03:13 by hamza             #+#    #+#             */
/*   Updated: 2023/10/01 14:59:51 by hamza            ###   ########.fr       */
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
        Zombie(void) : name("default") {};
        Zombie(std::string name)
        {
            this->name = name;
        };
        void anounce(void);
};
#endif