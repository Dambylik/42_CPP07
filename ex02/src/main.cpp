/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:26:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/19 14:28:11 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    
    try {
        // Test Default Constructor
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // Test Parameterized Constructor
        Array<int> intArray(5);
        std::cout << "Int array size: " << intArray.size() << std::endl;

        // Assign values
        for (unsigned int i = 0; i < intArray.size(); i++)
            intArray[i] = i * 2; // Assign values

        // Print values
        std::cout << "Int array elements: ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        // Test Copy Constructor
        Array<int> copyArray(intArray);
        std::cout << "Copy array elements: ";
        for (unsigned int i = 0; i < copyArray.size(); i++)
            std::cout << copyArray[i] << " ";
        std::cout << std::endl;

        // Test Assignment Operator
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Assigned array elements: ";
        for (unsigned int i = 0; i < assignedArray.size(); i++)
            std::cout << assignedArray[i] << " ";
        std::cout << std::endl;

        // Test Exception Handling
        std::cout << "Attempting out-of-bounds access..." << std::endl;
        std::cout << intArray[10] << std::endl; // Should throw an exception

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
