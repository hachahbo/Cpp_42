/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:18:52 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/05 13:21:50 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class ex
{
    public:
        ex(void);
        ~ex(void);
};

ex::ex(void)
{
    std::cout << "constractur is called" << std::endl;
}

ex::~ex(void)
{
    std::cout << "Destractur is called" << std::endl;
}
int main()
{
    ex t;
    return (0);
}