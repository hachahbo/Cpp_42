/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:43:41 by hamza             #+#    #+#             */
/*   Updated: 2023/12/20 23:57:56 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange
{
    private:
        int i;
        std::map<std::string,double> map;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange & operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        
        int     parseTheFile(char *str);
        void    parseDataValue(std::string str);
        void    ParseDate(std::string Date);
        void    parseDataValueInFile(std::string str);
        void    fillTheMap();
    
};
#endif