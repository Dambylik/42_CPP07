/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:26:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 14:34:11 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

int main( void ) {

    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}


// int main( void ) {

//     int a = 42;
//     int b = 4242;

// 	std::cout << YELLOW << "\nWhith int's :" << RESET << std::endl;

//     std::cout << "int a before swap = " << YELLOW << a << RESET
// 			  << "\nint b before swap = " << YELLOW << b << RESET
// 			  << "\n" << std::endl;

//     swap( a, b );

//     std::cout << "int a after swap = " << YELLOW << a << RESET
// 			  << "\nint b after swap = " << YELLOW << b << RESET
// 			  << "\n" << std::endl;

//     std::cout << "min( a, b ) = " << YELLOW << min( a, b ) << RESET << std::endl;
//     std::cout << "max( a, b ) = " << YELLOW << max( a, b ) << RESET << std::endl;

//     std::string A = "Olaf";
//     std::string B = "Donald";

// 	std::cout << LGREEN << "\n\nWhith strings :" << RESET << std::endl;

//     std::cout << "string A before swap = " << LGREEN << A << RESET
// 			  << "\nstring B before swap = " << LGREEN << B << RESET
// 			  << "\n" << std::endl;

//     swap(A, B);

//     std::cout << "string A after swap = " << LGREEN << A << RESET
// 			  << "\nstring B after swap = " << LGREEN << B << RESET
// 			  << "\n" << std::endl;

//     std::cout << "min( A, B ) = " << LBLUE << min( A, B ) << RESET << std::endl;
//     std::cout << "max( A, B ) = " << LBLUE << max( A, B ) << RESET << std::endl;
//     return 0;
// }