/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:40:45 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/29 10:40:47 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>

class Contact
{
public:
    Contact( void );
    ~Contact( void );

    int index;

    int set_contact(int index);
    
    std::string get_firstname( void ) const;
    std::string get_lastname( void ) const;
    std::string get_nickname( void ) const;
    std::string get_phonenumber( void ) const;
    std::string get_darkestsecret( void ) const;
      
private:

    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret; 
    
};
