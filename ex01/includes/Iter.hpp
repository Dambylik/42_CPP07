/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:21:42 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/19 13:53:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Colors.hpp"
#include <iostream>
#include <string>

template< typename T >

void iter(T* array, size_t length, void(*func)( T & )) {

    if (!array || !func) {
        std::cout << "Error occured" << std::endl;
        return;
    }
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}
