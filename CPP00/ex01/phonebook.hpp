/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:22:08 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/28 12:15:45 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include   <iostream>
#include "contact.hpp"

class phonebook
{
    private:
        contact	contacts[8];
        int		index;
    public:
        void    setIndex();
        int     getIndex();
        void    addContact();
        void	displayContacts(phonebook pb);
};
#endif