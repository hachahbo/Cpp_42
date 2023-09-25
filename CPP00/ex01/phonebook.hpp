/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:22:08 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/25 12:59:50 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include   <iostream>
#include "contact.hpp"

class phonebook
{
    private:
        contact  contacts[8];
        int index;
    public:
        void add_contact(std::string name, std::string lname,
            std::string Nname, std::string Pnumber,
            std::string dScret);
        void search_display_contact();
        void display_contacts();
};

#endif