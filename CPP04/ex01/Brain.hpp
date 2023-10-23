/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:54:15 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/22 20:08:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public :
        Brain();
        Brain(Brain const & other);
        Brain & operator=(Brain const & other);
        ~Brain();
};

#endif