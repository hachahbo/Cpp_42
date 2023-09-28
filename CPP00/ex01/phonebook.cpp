/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:47:46 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/26 12:16:19 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

void phonebook::addContact()
{
    std::string str;
   
    str = "";
    std::cout << "enter the name :";
    getline(std::cin, str);
    contacts[this->index % 8].setFisrtName(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s last name :";
    getline(std::cin, str);
    contacts[this->index % 8].setlastName(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s Nickname :";
    getline(std::cin, str);
    contacts[this->index % 8].setNickName(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s phone number :";
    getline(std::cin, str);
    contacts[this->index % 8].setPhoneNumbe(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s darkest secret:";
    getline(std::cin, str);
    contacts[this->index % 8].setDarkSecret(str);
    index++;
    contacts[index - 1].setnumber(index);
    std::cout << "the new contact has been added successfully !" << std::endl;
}
void contact::printInfo(contact con, int i)
{
    if( i == 1)
    {
        if(con.fristName.size() > 10)
            std::cout << std::setw(9) << std::string(con.fristName.begin(), con.fristName.begin() + 9) << "." << "|" ;
        else
            std::cout << std::setw(10) << con.fristName << "|";
    }
    if( i == 2)
    {
        if(con.lastName.size()  > 10)
            std::cout << std::setw(9) << std::string(con.lastName.begin(), con.lastName.begin() + 9) << "." << "|" ;
        else
            std::cout << std::setw(10) << con.lastName << "|";
    }
    if( i == 3)
    {
        if(con.nickName.size()  > 10)
            std::cout << std::setw(9) << std::string(con.nickName.begin(), con.nickName.begin() + 9) << "." << "|" ;
        else
            std::cout << std::setw(10) << con.nickName << "|";
    }
}

void phonebook::setIndex()
{
    index = 0;
}
int phonebook::getIndex()
{
    return (index);
}

void printMoreInfos(contact con)
{
    std::cout << "First name        : " << con.getFristName() << std::endl;
    std::cout << "Last name         : " << con.getLastName() << std::endl;
    std::cout << "Nickname          : " << con.getNickName() << std::endl;
    std::cout << "Phone number      : " << con.getPhoneNumber() << std::endl;
    std::cout << "Darkeset secret   : " << con.getDarkSecret() << std::endl;
}
void phonebook::displayContacts(phonebook pb)
{
    int i;
    int x;
    (void)pb;
    i = 0;
    std::cout << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while(i < 8)
    {
        if(pb.contacts[i].isFalse(pb.contacts[i]))
            break;
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        contacts[i].printInfo(contacts[i], 1);
        contacts[i].printInfo(contacts[i], 2);
        contacts[i].printInfo(contacts[i], 3);
        std::cout << std::endl;
        std::cout << "|-------------------------------------------|"<< std::endl << std::endl;
        i++;
    }
    std::cout << "enter the index for Requesting contact information (press 0 if you want to skip) :";
    std::cin >> x;
    i = 0;
    if(x)
    {    while(i < 8)
        {
            if(contacts[i].getnumber() == x)
            {
                printMoreInfos(contacts[i]);
                break;
            }
            i++;
        }
    }
}