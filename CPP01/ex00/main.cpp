/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:02:34 by hamza             #+#    #+#             */
/*   Updated: 2023/09/28 17:03:55 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie(void) : name("default") {};
        Zombie(std::string name)
        {
            this->name = name;
        };
        void anounce(void);
};

Zombie* newZombie( std::string name )
{
    return (new Zombie(name));
}
void randomChump( std::string name )
{
    Zombie z(name);
    z.anounce();
}
void    Zombie::anounce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
    Zombie * newz = new Zombie();
    newz->anounce();
    delete newz;
}