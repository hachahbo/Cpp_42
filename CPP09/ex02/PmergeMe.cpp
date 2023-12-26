/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:50:55 by hamza             #+#    #+#             */
/*   Updated: 2023/12/23 14:13:35 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    
}
PmergeMe::PmergeMe(const PmergeMe &other)
{
        *this = other;
}
PmergeMe PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other)
        *this = other;
    return *this;
}
PmergeMe::~PmergeMe()
{
    
}

//////////////////////////////////////////////
// ---------------- vector ---------------- //
//////////////////////////////////////////////

void PmergeMe::merge(std::vector<int>& array, std::vector<int>& leftArray, std::vector<int>& rightArray)
{
    int leftSize = leftArray.size();
    int rightSize = rightArray.size();
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;

    while (l < leftSize && r < rightSize)
    {
        if (leftArray[l] < rightArray[r])
        {
            array[i] = leftArray[l];
            ++i;
            ++l;
        }
        else
        {
            array[i] = rightArray[r];
            ++i;
            ++r;
        }
    }

    while (l < leftSize)
    {
        array[i] = leftArray[l];
        ++i;
        ++l;
    }

    while (r < rightSize)
    {
        array[i] = rightArray[r];
        ++i;
        ++r;
    }
}
void PmergeMe::mergeSort(std::vector<int>& array)
{
    int length = array.size();

    if (length <= 1)
        return;

    int middle = length / 2;
    std::vector<int> leftArray(array.begin(), array.begin() + middle);
    std::vector<int> rightArray(array.begin() + middle, array.end());

    mergeSort(leftArray);
    mergeSort(rightArray);
    
    merge(array, leftArray, rightArray);
}

////////////////////////////////////////////
// ---------------- list ---------------- //
////////////////////////////////////////////

void PmergeMe::mergeList(std::list<int>& listArray, std::list<int>& leftArray, std::list<int>& rightArray)
{
    std::list<int>::iterator leftIt = leftArray.begin();
    std::list<int>::iterator rightIt = rightArray.begin();
    std::list<int>::iterator listIt = listArray.begin();

    while (leftIt != leftArray.end() && rightIt != rightArray.end())
    {
        if (*leftIt < *rightIt)
        {
            *listIt = *leftIt;
            ++leftIt;
        }
        else
        {
            *listIt = *rightIt;
            ++rightIt;
        }
        ++listIt;
    }
    std::copy(leftIt, leftArray.end(), listIt);
    std::copy(rightIt, rightArray.end(), listIt);
}
void PmergeMe::mergeSortList(std::list<int>& listArray)
{
    int length = listArray.size();

    if (length <= 1)
        return;

    int middle = length / 2;
    std::list<int>::iterator it = listArray.begin();
    std::advance(it, middle);
    std::list<int> leftArray(listArray.begin(), it);
    std::list<int> rightArray(it,  listArray.end());

    mergeSortList(leftArray);
    mergeSortList(rightArray);

    mergeList(listArray, leftArray, rightArray);
}

int     PmergeMe::checkIsValid(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        while(str[i] && std::isspace(str[i]))
            i++;
        while(std::isdigit(str[i]))
            i++;
        while(str[i] && std::isspace(str[i]))
            i++;
        if(!std::isspace(str[i])  && str[i])
            return 0;
    }
    return 1;
}
void PmergeMe::ft_begin(int ac, char **av)
{
    int i = 1;
    int nb;
    while(i < ac)
    {
        if(!checkIsValid(av[i]))
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        nb = std::atoi(av[i]);
        if(nb < 0)
        {
            std::cout << "Error" << std::endl;
            return ;
        }   
        array.push_back(nb);
        listArray.push_back(nb);
        i++;
    }
    std::clock_t start = std::clock();
    std::cout << "before    : ";
    for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it) {
        std::cout << *it << " ";
    }
    mergeSort(this->array);
    
    std::cout <<  std::endl;
    std::cout << "after     : ";
    for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout <<  std::endl;
    std::cout << "Time to process a range of " <<  array.size() <<" elements with std::vector : " << start* 1000000 <<" us"<<  std::endl;
    std::clock_t start1 = std::clock();
    
    std::cout << "before    : ";
    for (std::list<int>::iterator it = listArray.begin(); it != listArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout <<  std::endl;
    mergeSortList(this->listArray);
    std::cout << "after     : ";
    for (std::list<int>::iterator it = listArray.begin(); it != listArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout <<  std::endl;
    std::cout << "Time to process a range of " <<  this->listArray.size() <<" elements with std::list : " << start1* 1000000 <<" us"<<  std::endl;
}