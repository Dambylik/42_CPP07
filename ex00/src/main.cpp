/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:26:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/19 12:43:01 by okapshai         ###   ########.fr       */
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

//     int a               = 42;
//     int b               = 4242;
//     float c             = -1.7f;
//     float d             = 4.2f;
//     std::string str1    = "Olaf";
//     std::string str2    = "Donald";
//     char char1          = 'a';
//     char char2          = 'z';

// 	std::cout << YELLOW << "\n------------SWAP------------\n" << RESET << std::endl;
    
//     std::cout << "Before swap:" << std::endl;
    
//     std::cout << "a = " << YELLOW << a << RESET
//                 << "\nb = " << YELLOW << b << RESET 
//                     << "\nc = " << YELLOW << c << RESET 
//                         << "\nd = " << YELLOW << d << RESET
//                             << "\nstr1 = " << YELLOW << str1 << RESET 
//                                 << "\nstr2 = " << YELLOW << str2 << RESET
//                                     << "\nchar1 = " << YELLOW << char1 << RESET 
//                                         << "\nchar2 = " << YELLOW << char2 << RESET << std::endl;

//     ::swap<int>( a, b );
//     ::swap<float>( c, d );
//     ::swap<std::string>(str1, str2);
//     ::swap<char>( char1, char2);

//     std::cout << "\nAfter swap:" << std::endl;

//     std::cout << "a = " << YELLOW << a << RESET
//                 << "\nb = " << YELLOW << b << RESET 
//                     << "\nc = " << YELLOW << c << RESET 
//                         << "\nd = " << YELLOW << d << RESET
//                             << "\nstr1 = " << YELLOW << str1 << RESET 
//                                 << "\nstr2 = " << YELLOW << str2 << RESET
//                                     << "\nchar1 = " << YELLOW << char1 << RESET 
//                                         << "\nchar2 = " << YELLOW << char2 << RESET << std::endl;


//     std::cout << YELLOW << "\n------------MIN------------\n" << RESET << std::endl;
    
//     std::cout << "min( a, b ) = " << YELLOW << ::min<int>( a, b ) << RESET << std::endl;
//     std::cout << "min( c, d ) = " << YELLOW << ::min<float>( c, d ) << RESET << std::endl;
//     std::cout << "min( str1, str2 ) = " << YELLOW << ::min<std::string>( str1, str2 ) << RESET << std::endl;
//     std::cout << "min( char1, char2 ) = " << YELLOW << ::min<char>( char1, char2 ) << RESET << std::endl;

//     std::cout << YELLOW << "\n------------MAX------------\n" << RESET << std::endl;
    
//     std::cout << "max( a, b ) = " << YELLOW << ::max<int>( a, b ) << RESET << std::endl;
//     std::cout << "max( a, b ) = " << YELLOW << ::max<float>( c, d ) << RESET << std::endl;
//     std::cout << "max( str1, str2 ) = " << YELLOW << ::max<std::string>( str1, str2 ) << RESET << std::endl;
//     std::cout << "max( char1, char2 ) = " << YELLOW << ::max<char>( char1, char2 ) << RESET << std::endl;

//     return 0;
// }