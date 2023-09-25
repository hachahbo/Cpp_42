/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:17:23 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/25 12:36:55 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contac.hpp"

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
void contact::setDark_secret(std::string Dscret)
{
    dark_secret = Dscret;
}

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
std::string contact::getDark_secret()
{
    return (dark_secret);
}