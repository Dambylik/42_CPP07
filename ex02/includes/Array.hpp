/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:21:42 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/19 14:57:15 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>

template <typename T>

class Array {
    
    private:
    
        T* _data;      // Pointer to dynamically allocated array
        unsigned int _size;  // Number of elements in the array

    public:
        
        Array() : _data(NULL), _size(0) {} // _data(NULL) = no memory allocated

        Array( unsigned int n ) : _data(new T[n]()), _size(n) {} //Allocates memory for n elements, new T[n]() → Ensures default initialization (zero for primitive types). 

        Array( Array const & other ) : _data(NULL), _size(other._size) {
            
            if (_size > 0) {
                _data = new T[_size]; // llocates new memory and copies each element from other._data to _data.
                for (unsigned int i = 0; i < _size; i++) {
                    _data[i] = other._data[i]; // deep copy
                }
            }
        }

        Array& operator=( Array const & other) {
            if (this != &other) { // Avoid self-assignment
                delete[] _data; // Free existing memory
                
                _size = other._size;
                _data = (_size > 0) ? new T[_size] : NULL; // REWRITE WITHOUT TERNARY OPERATOR
                for (unsigned int i = 0; i < _size; i++) {
                    _data[i] = other._data[i];
                }
            }
            return (*this);
        }

        ~Array() {
            delete[] _data;
        }

        // Subscript Operator [] for Access - WHAT IS SUBSCRIPT OPERTOR?
        T& operator[]( unsigned int index ) { // Returns a reference to the element at index.
            if (index >= _size)
                throw std::out_of_range("Index out of bounds"); //Throws an exception if index is out of bounds.
            return _data[index];
        }

        // Read-only Subscript Operator (for const objects)
        //Allows const objects to use [] without modifying elements.
        const T& operator[](unsigned int index) const {
            if (index >= _size)
                throw std::out_of_range("Index out of bounds");
            return _data[index];
        }

        // Size function (returns number of elements)
        unsigned int size() const {
            return _size;
        }
};
