/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:05:36 by hamza             #+#    #+#             */
/*   Updated: 2023/12/21 02:24:48 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    this->i = 0;
    // std::cout << "default constructor" << std::endl;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if(this != &other)
        *this = other;
    return(*this);
}
BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "default destructor";
}

void   BitcoinExchange::parseDataValue(std::string str)
{
    int pos = str.find(',');
    if(pos == -1)
        return ;
    std::string date = str.substr(0, pos);
    std::string val  = str.substr(pos + 1);
    double n  = 0;
    n = std::atof(val.c_str());
    map.insert(std::make_pair(date, n));
}
void    BitcoinExchange::fillTheMap()
{
    std::ifstream inFile;
    std::string text;
    std::string str;
    int pos;

    inFile.open("./data.csv",  std::ios::in); //read;
    if(!inFile)
    {
        std::cout << "Error : opening the file." << std::endl;
        return ;
    }
    if(inFile.is_open())
    {
        getline(inFile, text, '\0');
    }
    while(1)
    {
        pos = text.find('\n');
        if(pos == std::string::npos)
                break;
        str = text.substr(0, pos);
        parseDataValue(str);
        text.erase(0, pos + 1);
    }
    str = text.substr(0, text.length());
    parseDataValue(str);
}
int checkIsDigit(char *ptr)
{
    int i = 0;
    while(ptr[i] && ptr[i] != '\n')
    {
        if(!std::isdigit(ptr[i]) && ptr[i] != '-'  && ptr[i] != '.')
            return(0);
        i++;
    }
    return(1);
}
bool isLapYear(int year)
{
    if(year % 400 == 0)
    {
        return(true);
    }
    return (false);
}
int checkTheDateIsValid(std::string date)
{
    int year, month, day;
    std::istringstream ss(date);
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    std::getline(ss, date, '-');
    year = std::stoi(date);
    std::getline(ss, date, '-');
    month = std::stoi(date);
    std::getline(ss, date);
    day = std::stoi(date);
    if(month > 12 || month  < 1 || day  < 1)
        return (-1);
    if(month == 2 && isLapYear(year))
    {
        daysInMonth[2] = 29;  
    }
    return day <= daysInMonth[month];
}
double converDateToInt(std::string date)
{
    int i = 0;
    int j = 0;
    int n  = 0;
    int counter = 0;
    std::string newDate;
    if(!checkTheDateIsValid(date))
        return (-2);
    while(i  < date.length())
    {
        if(date[i] == '-')
        {
            counter++;
            i++;
        }
        else 
        {
            newDate[j] = date[i];
            i++;
            j++;
        }
        if(counter > 2)
        {
            std::cout << "Error : bad input => " << date << std::endl;
            return -2;
        }
    }
    n = std::atof(newDate.c_str());
    return(n);
}
void   BitcoinExchange::parseDataValueInFile(std::string str)
{
    int pos = str.find(' ');
    char *ptr;
    if(pos == -1)
    {
        std::cout << "Error : bad input => " << str << std::endl;
        return ;
    }
    std::string date = str.substr(0, pos);
    std::string val;
    
    pos = str.find('|');
    if(pos == -1)
    {
        std::cout << "Error : bad input => " << str << std::endl;
        return ;
    }
    val = str.substr(pos, str.length() - pos);
    ptr = &val[2];
    if(pos == -1 ||  str[pos + 1]  == '\n' || str[pos + 1] == 0 || !checkIsDigit(ptr))
    {
        std::cout << "Error : bad input => " << date << std::endl;
        return ;
    }
    std::string newStr = str.substr(pos +1, str.length() - pos);
    double value;
    value = std::strtof(newStr.c_str(), NULL);
    if(value < 0)
    {
        std::cout << "Error: not a positive number."<< std::endl;
            return ;
    }
    if(value > INT16_MAX)
    {
        std::cout << "Error: too large a number."<< std::endl;
            return ;
    }
    int n = converDateToInt(date);
    if(n == -2)
        return ;
    double nData;
    std::map<std::string, double>::iterator prevIterator = map.begin();
    std::map<std::string, double>::iterator it;
    for (it= map.begin(); it != map.end(); ++it)
    {
        const std::string& key = it->first;
        double val = prevIterator->second;
        std::string prevKey = prevIterator->first;
        nData =  converDateToInt(key);
        if(nData == - 2)
            return ;
        if(n < nData)
        {
            double result;
            result = value * val;
            std::cout << date << " => " << value << " = "  << result << std::endl;
            break ;
        }
        prevIterator = it;
    }
    if(it == map.end())
        std::cout << date << " this date doesn't exist"<< std::endl;
}
int    BitcoinExchange::parseTheFile(char *filename)
{
    std::ifstream inFile;
    std::string text;
    std::string str;
    int pos;

    inFile.open(filename,  std::ios::in); //read;
    if(!inFile)
    {
        std::cout << "Error : opening the file." << std::endl;
        return(0);
    }
    if(inFile.is_open())
        getline(inFile, text, '\0');
    int i = 0;
    while(1)
    {
        pos = text.find('\n');
        if(pos == std::string::npos)
                break;
        str = text.substr(0, pos);
        if(str.compare("date | value"))
            parseDataValueInFile(str);
        i++;
        text.erase(0, pos + 1);
    }
    str = text.substr(0, text.length());
    parseDataValueInFile(str);
    return(0);
}