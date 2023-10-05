/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:24 by hamza             #+#    #+#             */
/*   Updated: 2023/10/04 17:14:58 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        void setType(std::string type);
        const std::string& getType();
};

class HumanA
{
    private:
        std::string name;
        Weapon &WeponX;
    public:
        HumanA(std::string name, Weapon &WeponX);
        void attack();
        void setWeapon(Weapon Weapon);
};


class HumanB
{
    private:
        std::string name;
        Weapon &WeponX;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon Weapon);
        void attack();
        
};


int main()
{
    
}