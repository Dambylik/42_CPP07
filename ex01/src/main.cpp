/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:26:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/03/18 14:41:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void) {
    int tab[] = {1, 2, 33, 44};

    ::iter(tab, 4, print);

    std::string names[] = {
        "riri",
        "fifi",
        "loulou"
    };
    
    ::iter(names, 3, print);
    
    return (0);
}
