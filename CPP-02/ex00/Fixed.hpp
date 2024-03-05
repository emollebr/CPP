/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:39:52 by emollebr          #+#    #+#             */
/*   Updated: 2024/03/04 12:39:53 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
private:
    int                         _value;
    static const int    _fractionalBits = 8;
public:
    Fixed( void );
    ~Fixed();
    Fixed (const Fixed &fixed);
    Fixed& operator= (const Fixed &fixed);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};
