/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:21:55 by hamza             #+#    #+#             */
/*   Updated: 2023/12/13 02:37:34 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->size = 0;
}
Span::Span(unsigned int n)
{
    this->size = n;
    this->counter = 0;
}
Span::Span(const Span & other)
{
    this->size = other.size;
    this->arr = other.arr;
}
Span Span::operator=(const Span & other)
{
    if(this != &other)
    {
        this->size = other.size;
        this->arr = other.arr;
    }
    return (*this);
}
Span::~Span()
{
    // std::cout << "default Destructor" <<std::endl;
}

void Span::addNumber(int number)
{
    counter++;
    if(counter > size)
        throw MyAaccessexption();
    arr.push_back(number);
    std::sort(arr.begin(), arr.end());
}
int Span::shortestSpan()
{
    if(arr.size() == 1)
    {
        std::cout << "there is a one number" <<std::endl;
        return 0;
    }
    int s_span = arr[1] - arr[0];
    for(int i = 1; i < arr.size() - 1; i++)
    {
        if(s_span > arr[i + 1] - arr[i])
            s_span = arr[i + 1] - arr[i];
    }
    return(s_span);
}
int Span::longestSpan()
{
    int end = arr.size() - 1;
    return(arr[end] - arr[0]);
}
void Span::rangeNumbers(int n1, int n2)
{
    this->r_size = n2 - n1  + 1;
    for(int i = 0; i < r_size; i++)
        arr.push_back(n1 + i);
}
void Span::display()
{
    for(int i = 0; i < r_size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}