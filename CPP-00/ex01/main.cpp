/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:41:08 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/29 10:41:09 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

# include <iostream>
# include <string.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>
#include <csignal>

int main( void )
{
    std::string   input;
    PhoneBook   phonebook;

    while (1)
    {
        std::cout << "\nPlease enter option:\n\nADD\nSEARCH\nEXIT\n\n" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof()==1) {
            std::cin.clear();
            return (0);
        }
        if (input == "ADD" || input == "add")
            phonebook.Add();
        else if (input == "SEARCH" || input == "search")
            phonebook.Search();
        else if (input == "EXIT" || input == "exit") {
            if (phonebook.Exit() == 1)
                break ;
        }
        else
            std::cout << "Invalid option. \n\n" << std::endl;
    }
    return (0);
}
