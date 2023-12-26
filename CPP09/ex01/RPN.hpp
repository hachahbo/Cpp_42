/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:29:12 by hamza             #+#    #+#             */
/*   Updated: 2023/12/22 00:57:19 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <fstream>
#include <string>
#include <queue>
#include <sstream>

enum op_type
{
    SUM = '+',
    PROD = '*',
    DIV =  '/',
    SUB = '-'
};

class RPN
{
    private:
        std::stack<int> myStack;
        int res;
        bool update;
        op_type opType;
        int div;
        
    public:
        RPN();
        // RPN(const RPN & other);
        // RPN & operator=(const RPN & other);
        // ~RPN();

        void    ft_begin(char *str);
        int  operators(int c);
        int  parseTheString(char *str);
        int  do_op(char  c);
        int  checkIsDisgit(std::string temp);
        void  setype(char c);
};
#endif