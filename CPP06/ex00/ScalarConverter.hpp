/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:51:56 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 15:09:31 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>


enum e_type
{
    INT,
    CHAR,
    DOUBLE,
    FLOAT,
    STRING,
    NAN,
    UNKNOWN
};
class ScalarConverter
{
    private:
        int     i;
        float   f;
        double  d;
        char    c;
        
        std::string string;
        e_type  type;
        
    public:
        ScalarConverter();
        ScalarConverter(std::string str);
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter &other);
        ~ScalarConverter();
        
        void    setChar(char c);
        char    getChar();
        
        void    setInt(int c);
        int     getInt();
        
        void    setFloat(float f);
        float   getFloat();

        void    setDouble(double d);
        double  getDouble();

        void setString(std::string str);
        std::string getString();

        void setType();

        int isInt(std::string str);
        int isFloat(std::string str);
        int isDouble(std::string str);
        int isChar(std::string str);
        int isLiteral(std::string str);
        
        void printChar(char _c);
        void printInt(int _i);
        void printFloat(float _f);
        void printDouble(double _d);
        void printNan(std::string string);

        void convert();
};
 
std::ostream & operator<< (std::ostream & o, ScalarConverter const & Value);

#endif