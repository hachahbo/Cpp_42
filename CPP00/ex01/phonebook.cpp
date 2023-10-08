/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:47:46 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/05 14:07:00 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

int checkStr(std::string str)
{
    unsigned long i;
    char c;

    i = 0;
    while (i < str.length())
    {
        c = str[i];
        if(!(std::isdigit(c)))
            return (0);
        i++;
    }
    return (1);
}

int checkName(std::string str)
{
    unsigned long i;
    char c;

    i = 0;
    while (i < str.length())
    {
        c = str[i];
        if(!(std::isalpha(c)))
            return (0);
        i++;
    }   
    return (1);
}

int checkLastName(std::string str)
{
    unsigned long i;
    char c;

    i = 0;
    while (i < str.length())
    {
        c = str[i];
        if(std::isalpha(c) || std::isspace(c))
            i++;
        else
            return(0);
    }   
    return (1);
}

void phonebook::addContact()
{
    std::string str;
   
    str = "";
    std::cout << "enter the name :";
    if(!getline(std::cin, str))
    {
        std::cin.clear();
        clearerr(stdin);
        std::cout << std::endl;
    }
     if( str.empty() || !checkName(str))
    {
        while(!checkName(str) || str.empty())
        {
            std::cout << "wrong input !!!" << std::endl;
            std::cout << "pleas enter a correct first name : ";
            if(!getline(std::cin, str))
            {
                std::cin.clear();
                clearerr(stdin);
                std::cout << std::endl;
            }
        }
    }
    contacts[this->index % 8].setFisrtName(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s last name :";
   if(!getline(std::cin, str))
    {
        std::cin.clear();
        clearerr(stdin);
        std::cout << std::endl;
    }
    if(!checkLastName(str) || str.empty())
    {
        while(!checkLastName(str)|| str.empty())
        {
            std::cout << "wrong input !!!" << std::endl;
            std::cout << "pleas enter a correct last name : ";
            if(!getline(std::cin, str))
            {
                std::cin.clear();
                clearerr(stdin);
                std::cout << std::endl;
            }
        }
    }
    contacts[this->index % 8].setlastName(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s Nickname :";
   if(!getline(std::cin, str))
    {
        std::cin.clear();
        clearerr(stdin);
        std::cout << std::endl;
    }
    while(str.empty())
    {
        std::cout << "wrong input !!!" << std::endl;
        std::cout << "pleas enter a correct Nickname name : ";
        if(!getline(std::cin, str))
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
    }

    contacts[this->index % 8].setNickName(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s phone number :";
   if(!getline(std::cin, str))
    {
        std::cin.clear();
        clearerr(stdin);
        std::cout << std::endl;
    }
    while(!checkStr(str) || str.empty())
    {
        std::cout << "wrong input !!!" << std::endl;
        std::cout << "pleas enter " << contacts[this->index % 8].getFristName() << "'s phone number :";
        if(!getline(std::cin, str))
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
    }
    contacts[this->index % 8].setPhoneNumbe(str);
    
    str = "";
    std::cout << "enter " << contacts[this->index % 8].getFristName() << "'s darkest secret:";
   if(!getline(std::cin, str))
    {
        std::cin.clear();
        clearerr(stdin);
        std::cout << std::endl;
    }
    while(str.empty())
    {
        std::cout << "wrong input !!!" << std::endl;
        std::cout << "pleas enter " << contacts[this->index % 8].getFristName() << "'s phone number :";
        if(!getline(std::cin, str))
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
    }
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
    std::string str;
    (void)pb;
    i = 0;
    std::cout << std::endl;
    std::cout << "|-------------------------------------------|"<< std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while(i < 8)
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        contacts[i].printInfo(contacts[i], 1);
        contacts[i].printInfo(contacts[i], 2);
        contacts[i].printInfo(contacts[i], 3);
        std::cout << std::endl;
        if(pb.contacts[i + 1].isFalse(pb.contacts[i + 1]))
            break;
	        std::cout << "|----------|----------|----------|----------|" << std::endl;
        i++;
    }
    std::cout << "|___________________________________________|"<< std::endl;
    std::cout << std::endl;
    std::cout << "enter the index for Requesting contact information (press enter or 0 if you want to skip) :";
    if(!getline(std::cin, str))
    {
        std::cin.clear();
        clearerr(stdin);
        std::cout << std::endl;
    }
    unsigned long l = 0;
    char c;
    while(l < str.size())
    {
        c = str[l];
        if(!(std::isdigit(c)))
        {
            std::cout << "wrong input !!!" << std::endl;
            if(index == 1)
                std::cout << "there is only one contact (index 1) .\n";
            else
                std::cout << "pleas next time enter the index between (1 && " << index << ") \n";
            return ;
        }
        l++;
    }
    const char* charStr = str.c_str();
    x = std::atoi(charStr);
    i = 0;
    if(x >= 1 && x <= index)
    {    
        while(i < 8)
        {
            if(contacts[i].getnumber() == x)
            {
                printMoreInfos(contacts[i]);
                break;
            }
            i++;
        }
    }
    else if(x == 0)
        return ;
    else if(!(x < 1 && x > index + 1))
    {
        if(str.empty())
            return ;
        std::cout << "wrong input !!!" << std::endl;
        if(index == 1)
            std::cout << "there is only one contact (index 1) .\n";
        else
            std::cout << "pleas next time enter the index between (1 && " << index << ") \n";
    }
        
}