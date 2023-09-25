/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:47:46 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/25 14:04:30 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phonebook::add_contact(std::string name, std::string lname,
            std::string Nname, std::string Pnumber, std::string dScret)
{        
    contacts[index].setFisrtName(name);
    contacts[index].setlastName(lname);
    contacts[index].setNickName(Nname);
    contacts[index].setPhoneNumbe(Pnumber);
    contacts[index].setDark_secret(dScret);
    index++;
    if(index >= 7)
        index = 0;
}

void phonebook::display_contacts()
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    
}

void 
void phonebook::displaySearchContacts()
{
    display_contacts();
}