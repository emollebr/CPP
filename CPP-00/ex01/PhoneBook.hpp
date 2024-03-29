/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:40:58 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/29 10:40:59 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>

class PhoneBook
{
public:
    PhoneBook( void );
    int         Add( void );
    int         Search( void );
    int         DisplayAllContacts( void );
    int         DisplayContact(int num);
    int         Exit( void );
    ~PhoneBook( void );
    
private:
    Contact ContactArray[8];
    int num_of_contacts;
};
