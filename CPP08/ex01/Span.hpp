/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:22:01 by hamza             #+#    #+#             */
/*   Updated: 2023/12/13 02:33:19 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class MyAaccessexption : public std::exception {
    public :
    virtual const char * what() const throw()
    { return "out of range"; }
};


class Span
{
    private:
        unsigned int size;
        std::vector<int> arr;
        int counter;
    
    public:
        unsigned int r_size;
        Span();
        Span(unsigned int n);
        Span(const Span & other);
        Span operator=(const Span & other);
        ~Span();

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void rangeNumbers(int n1, int n2);
        void display();
        
};

#endif