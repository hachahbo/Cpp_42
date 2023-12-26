/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:57:42 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 15:09:25 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "default constructor" << std::endl;
	this->c = '\0';
	this->i = 0;
	this->f = 0.0f;
	this->d = 0.0;
}

ScalarConverter::ScalarConverter(std::string str)
{
	// std::cout << "constructor" << std::endl;
	this->c = '\0';
	this->i = 0;
	this->f = 0.0f;
	this->d = 0.0;
	this->string = str;
}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	this->c = getChar();
	this->i = getInt();
	this->f = getFloat();
	this->d = getDouble();
	return (*this);
}
ScalarConverter::~ScalarConverter()
{
	// std::cout << "Dfault destructor";
}
		
void    ScalarConverter::setChar(char c)
{
	this->c = c;
}
char    ScalarConverter::getChar()
{
	return(this->c);
}

		
void    ScalarConverter::setInt(int i)
{
	this->i = i;
}
int     ScalarConverter::getInt()
{
	return(this->i);
}
		
void    ScalarConverter::setFloat(float f)
{
	this->f = f;
}
float   ScalarConverter::getFloat()
{
	return(this->f);
}

void    ScalarConverter::setDouble(double d)
{
	this->d = d;
}
double  ScalarConverter::getDouble()
{
	return(this->d);
}

void ScalarConverter::setString(std::string str)
{
	this->string = str;
}
std::string ScalarConverter::getString()
{
	return(this->string);   
}

int ScalarConverter::isInt(std::string str)
{
	int i;
	
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(i < str.length())
	{
		if(!std::isdigit(str[i]))
			return(false);
		i++;
	}
	return(true);
}
int ScalarConverter::isFloat(std::string str)
{
	int i;
	int j  = 0;
	const char *s;

	
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(i < str.length())
	{
		if(str[i] == '.')
			break;
		if(!std::isdigit(str[i]))
			return(false);
		i++;
	} 
	if(!std::strchr(str.c_str(), '.'))
		return(false);
	s = std::strchr(str.c_str(), '.');
	j++;
	if(!s[j] ||!std::isdigit(s[j]))
			return(false);
	i++;
	while(i < str.length())
	{
		if(!std::isdigit(str[i]))
		{
			if(str[i] != 'f' && str[i + 1])   
				return(false);
			else if(str[i] == 'f' && !str[i + 1])
					return (true);
			return(false);
		}
		i++;
	}
	return(true);
}

int ScalarConverter::isDouble(std::string str)
{
	int i;
	int j = 0;
	const char *s;

	i = 0;

	if(str[i] == '+' || str[i] == '-')
		i++;
		// puts("teste");
	while(i < str.length())
	{
		if(str[i] == '.')
			break;
		if(!std::isdigit(str[i]))
			return(false);
		i++;
	}
	if(!std::strchr(str.c_str(), '.'))
		return(false);
	s = std::strchr(str.c_str(), '.');
	j++;
	if(!s[j] ||!std::isdigit(s[j]))
			return(false);
	i++;
	while(i < str.length())
	{
		if(!std::isdigit(str[i]))
			return(false);
		i++;
	}
	return(true);
}
int ScalarConverter::isChar(std::string str)
{
	if(str.length() == 1 && std::isalpha(str[0]) && std::isprint(str[0]))
		return(true);
	return(false);
}

 int ScalarConverter::isLiteral(std::string str)
 {
	if(!str.compare("nan")  || !str.compare("nanf") 
		|| !str.compare("-inf") || !str.compare("+inf")
		|| !str.compare("+inff") || !str.compare("-inff"))
	{
		this->type = NAN;
		return(true);
	}
	return(false);
 }
void  ScalarConverter::printInt(int _i)
{
	std::cout << "int 		: " << _i <<std::endl;
}
void	ScalarConverter::printChar(char _c)
{
	if(!std::isprint(c))
		std::cout << "char		: Non displayable"<< std::endl;
	if(i > 127 || i < 0)
		std::cout << "char		: impossible" <<std::endl;
	else
		std::cout << "char		: " << c <<std::endl;
}
void	ScalarConverter::printFloat(float _f)
{
	const char *s;

	s = std::strchr(string.c_str(), '.');
	if(!s)
		std::cout << "float		: " << f << ".0" << "f" << std::endl;
	else
		std::cout << "float		: " << f << "f" << std::endl;
}
void	ScalarConverter::printDouble(double _d)
{
	const char *s;

	s = std::strchr(string.c_str(), '.');
	if(!s)
		std::cout << "double		: " << f << ".0" << std::endl;
	else
		std::cout << "double		: " << f <<std::endl;
		
}

void ScalarConverter::printNan(std::string string)
{
	std::cout << "char		: impossible" << std::endl;
	std::cout << "int		: impossible" << std::endl;
	if(!string.compare("nan") || !string.compare("nanf"))
	{
		std::cout << "float		: nanf" << std::endl;
		std::cout << "double		: nan" << std::endl;	
	}
	if(!string.compare("+inf") || !string.compare("+inff"))
	{
		std::cout << "float		: +inff" << std::endl;
		std::cout << "double		: +inf" << std::endl;	
	}
	if(!string.compare("-inf") || !string.compare("-inff"))
	{
		std::cout << "float		: -inff" << std::endl;
		std::cout << "double		: -inf" << std::endl;	
	}
}
void ScalarConverter::convert()
{

	this->setType();
	
	switch (this->type)
	{
		case CHAR :
			this->c = string[0];
			this->i = static_cast<int>(c);
			this->f = static_cast<float>(c);
			this->d = static_cast<double>(c);
			break;
		case INT :
			this->i = std::stoi(string);
			this->c = static_cast<char>(i);
			this->f = static_cast<float>(i);
			this->d = static_cast<double>(i);
			break;
		case FLOAT :
			this->f = std::stof(string);
			this->c = static_cast<char>(f);
			this->i = static_cast<int>(f);
			this->d = static_cast<double>(f);
			break;
		case DOUBLE :
			this->d = std::stod(string);
			this->c = static_cast<char>(d);
			this->i = static_cast<int>(d);
			this->f = static_cast<double>(d);
			break;
		case NAN :
			this->printNan(string);
		case UNKNOWN :
			printf("Error  : unknown type\n");
			return ;		
			break;
	default:
		break;
	}
	if(type != NAN)
	{
		this->printChar(this->c);
		this->printInt(this->i);
		this->printFloat(this->f);
		this->printDouble(this->d);
	}
}

void ScalarConverter::setType()
{
	if(isInt(string))
		this->type = INT;
	else if(isDouble(string))
		this->type = DOUBLE;
	else if(isFloat(string))
		this->type = FLOAT;
	else if(isChar(string))
		this->type = CHAR;
	else if(isLiteral(string))
	{
		this->type = NAN;
	}
	else
		this->type = UNKNOWN;   
}

