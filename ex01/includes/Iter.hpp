/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:21:42 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 14:42:10 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>

void iter(T* array, size_t length, void(*f)(const T&)) {

    if (array) {
        for (size_t i = 0; i < length; i++)
            f(array[i]);
    }
    else
        std::cout << "Something's not adding up here..." << std::endl;
}

//no need for protection because reference and T* not T**
template<typename T>

void print(const T& c) {
    std::cout << c << std::endl;
}