/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:26:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/19 14:07:03 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>

void printElement(T & elem) {
    std::cout << elem << " ";
}

void doubleValue(int & n) {
    n *= 10;
}

int main() {

	std::cout << YELLOW << "\n------------Test with INTs------------\n" << RESET << std::endl;

    int intArr[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << MAGENTA << "Original int array: " << RESET;
    iter(intArr, intSize, printElement<int>);
    std::cout << std::endl;

    std::cout << MAGENTA << "Multiplied int array: " << RESET;
    iter(intArr, intSize, doubleValue);
    iter(intArr, intSize, printElement<int>);
    std::cout << std::endl;

    std::cout << YELLOW << "\n------------Test with Strings------------\n" << RESET << std::endl;
    std::string strArr[] = {"Hello", "Wonderful", "World"};
    size_t strSize = sizeof(strArr) / sizeof(strArr[0]);

    std::cout << MAGENTA << "String array: " << RESET;
    iter(strArr, strSize, printElement<std::string>);
    std::cout << std::endl << std::endl;
    return 0;
}

