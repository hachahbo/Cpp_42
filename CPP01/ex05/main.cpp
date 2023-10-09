/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:20:03 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/09 19:43:56 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string str;
    Harl  obj;
    while(str != "EXIT")
    {
        std::cout << " enter the level : ";
        std::cin >> str;
        obj.complain(str);
    }
}