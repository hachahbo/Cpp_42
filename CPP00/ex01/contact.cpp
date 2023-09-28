/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:17:23 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/26 12:02:45 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

 // -------------- setters ------------ //
 
void contact::setFisrtName(std::string fname)
{
    fristName = fname;
}

void contact::setlastName(std::string lname)
{
    lastName = lname;
}
void contact::setNickName(std::string Nname)
{
    nickName = Nname;
}
void contact::setPhoneNumbe(std::string Phnumber)
{
    phoneNmuber = Phnumber;
}
void contact::setDarkSecret(std::string Dscret)
{
    darkSecret = Dscret;
}

void contact::setnumber(int x)
{
    number = x;
}

// ----------- getters ------------ //
std::string contact::getFristName()
        {
    return (fristName);
}
std::string contact::getLastName()
{
            return (lastName);
 }
std::string contact::getNickName()
{
    return (nickName);
}
std::string contact::getPhoneNumber()
{
    return (phoneNmuber);
}
std::string contact::getDarkSecret()
{
    return (darkSecret);
}
int contact::getnumber()
{
    return (number);
}

int contact::isFalse(contact con)
{
	if (con.fristName.empty())
        return (1);
    return (0);
}