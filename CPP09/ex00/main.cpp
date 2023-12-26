/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:57:24 by hamza             #+#    #+#             */
/*   Updated: 2023/12/20 11:46:39 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    BitcoinExchange btc;

    if(ac != 2)
    {
        std::cout << "Error : could not open file" << std::endl;
        return (0);
    }
    btc.fillTheMap();
    btc.parseTheFile(av[1]);
}