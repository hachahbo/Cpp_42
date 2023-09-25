/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:19:13 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/25 12:49:45 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class contact
{
    private:
        std::string fristName;
        std::string lastName;
        std::string nickName;
        std::string phoneNmuber;
        std::string dark_secret;
    public:
        void setFisrtName(std::string fname);
        void setlastName(std::string lname);
        void setNickName(std::string Nname);
        void setPhoneNumbe(std::string Phnumber);
        void setDark_secret(std::string Dscret);
        
        std::string getFristName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDark_secret();
};

#endif