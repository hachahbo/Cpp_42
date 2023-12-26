/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:16:46 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 18:55:17 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array 
{
    // private :
        unsigned int _size;
    public :
        T* ptr;
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array<T> & operator=(const Array &other);
        void print();
        T  operator[](unsigned int i) const;
        int size();
        void access(int a);
        ~Array();
};

template <typename T> Array<T>::Array()
{
    T* ptr = nullptr;
}
template <typename T> Array<T>::Array(unsigned int n)
{
    ptr = new T[n];
    _size = n;
    for(int i = 0; i < _size ; i++)
        ptr[i] = i + 1;
}
template <typename T>void  Array<T>::print()
{
    for(int i = 0; i < _size ; i++)
        std::cout << ptr[i] << " ";
    std::cout << std::endl;
}

class MyAaccessexption : public std::exception {
    public :
    virtual const char * what() const throw()
    { return "access violation occurred. "; }
};
template <typename T> T  Array<T>::operator[](unsigned int i) const
{
    if(i >= _size)
        throw MyAaccessexption();
    return(this->ptr[i]);
}


template <typename T> Array<T>::Array(const Array &other)
{
    this->_size = other._size;
    ptr = new T[other._size];
    unsigned int i = 0;
    while(i < other._size)
    {
        this->ptr[i] = other[i];
        i++;
    }  
}
template <typename T> Array<T> & Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        this->_size = other._size;
        ptr = new T[other._size];
        unsigned int i = 0;
        while(i < other._size)
        {
            ptr[i] = other[i];
            i++;
        }
    }
    return (*this);
}
template <typename T> Array<T>::~Array()
{
    delete ptr;
}

template <typename T>int Array<T>::size()
{
    return _size;
}


template <typename T> void  Array<T>::access(int a)
{
    if(a < 0 || a > _size)
    {
        throw MyAaccessexption();
    }
}

#endif