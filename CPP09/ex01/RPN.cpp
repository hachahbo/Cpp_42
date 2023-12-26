/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:30:15 by hamza             #+#    #+#             */
/*   Updated: 2023/12/22 02:10:11 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    res = rand();
    div = 0;
    update = false; 
}
// RPN::RPN(const RPN & other)
// {
    
// }
// RPN & RPN::operator=(const RPN & other)
// {
    
// }
// RPN::~RPN()
// {
    
// }
int  RPN::operators(int c)
{
    if(c != '+' && c != '-' && c != '*' && c != '/')
        return 0;
    return(1);
}

int  RPN::parseTheString(char *str)
{
    int i = 0;
    
    while(str[i])
    {
        if(str[i] != ' ' && !std::isdigit(str[i]) && !operators(str[i]))
            return 0;
        i++;
    }
    return (1);
}
void  RPN::setype(char c)
{
    if(c == '+')
        this->opType = SUM;
    else if(c == '-')
        this->opType = SUB;
    else if(c == '*')
        this->opType = PROD;
    else if(c == '/')
        this->opType = DIV;
}
int   RPN::do_op(char c)
{
    int a;
    int b;
    if(c && myStack.size() == 0)
        return 0;
    b = myStack.top();
    myStack.pop();
    a = myStack.top();
    myStack.pop();
    setype(c);
        
    switch (this->opType)
    {
        case SUM:
            this->res = a + b;
            // this->update = true;
            // std::cout << " a : " << a << "| b " << b <<std::endl;
        break;
        case SUB:
            this->res = a - b;
            // this->update = true;
            // std::cout << " a : " << a << "| b " << b <<std::endl;
        break;
        case PROD:
            this->res = a * b;
            // this->update = true;
            // std::cout << " a : " << a << "| b " << b <<std::endl;
        break;
        case DIV:
            if(b)
            {
                this->res = a / b;
                // this->update = true;
            }
            else 
                this->div = -1;
        break;
    default:
        break;
    }
    this->myStack.push(res);
    return 1;
}

int  RPN::checkIsDisgit(std::string temp)
{
    int i = 0;
    while(temp[i])
    {
        if(!std::isdigit(temp[i]))
            return 0;
        i++;
    }   
    return (1);
}
void    RPN::ft_begin(char *str)
{
    if(!parseTheString(str))
    {
        std::cout << "Error" <<std::endl;
        return ;
    }
    std::istringstream iss(str);
    std::queue<std::string> tokenStack;
    std::string token;

    while (iss >> token) {
        tokenStack.push(token);
    }
    while(!tokenStack.empty())
    {
        std::string temp = tokenStack.front();
        tokenStack.pop();
        // int i = 0;
        if(checkIsDisgit(temp))
        {
            myStack.push(std::atoi(temp.c_str()));
        }
        if(operators(temp[0]))
        {  
            if(myStack.size() == 1)
            {
                std::cout << "Error" <<std::endl;
                return ;
            }
            if(!do_op(temp[0]))
            {
                std::cout << "Error" <<std::endl;
                return ;
            }  
                
            if(div == -1)
            {
                std::cout << "Error" <<std::endl;
                return ;
            }  
        }
    }
    if(myStack.size() != 1)
    {
        std::cout << "Error" <<std::endl;
        return ;
    }
    std::cout << res << std::endl;
}