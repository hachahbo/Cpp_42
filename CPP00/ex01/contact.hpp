/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:19:13 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/26 12:02:11 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
# include <iomanip>
# include <string>


class contact
{
    private:
        std::string fristName;
        std::string lastName;
        std::string nickName;
        std::string phoneNmuber;
        std::string darkSecret;
        int         number;
    public:
        void        setFisrtName(std::string fname);
        void        setlastName(std::string lname);
        void        setNickName(std::string Nname);
        void        setPhoneNumbe(std::string Phnumber);
        void        setDarkSecret(std::string Dscret);
        void        setnumber(int x);
        
        std::string getFristName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkSecret();
        int         getnumber();
        
        int         isFalse(contact con);
        void        printInfo(contact con, int i);
        
};

#endif