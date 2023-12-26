/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:38:35 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 15:44:45 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array {
public:
    // Default constructor
    Array() : ptr(nullptr), size(0) {}

    // Parameterized constructor
    Array(const T* otherPtr, size_t otherSize) : size(otherSize) {
        ptr = new T[size];
        for (size_t i = 0; i < size; ++i) {
            ptr[i] = otherPtr[i];
        }
    }

    // Copy constructor
    Array(const Array& other) : size(other.size) {
        ptr = new T[size];
        for (size_t i = 0; i < size; ++i) {
            ptr[i] = other.ptr[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] ptr;
    }

    // Display elements
    void display() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << ptr[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    T* ptr;
    size_t size;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);

    // Use the copy constructor
    Array<int> b(a);

    // Display original and copied objects
    std::cout << "Original object a: ";
    a.display();
    std::cout << "Copied object b: ";
    b.display();

    return 0;
}