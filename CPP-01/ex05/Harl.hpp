/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:11:35 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:11:36 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
# define HARL_CLASS_HPP
#include <iostream>
#include <string>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl( void );
    void    complain( std::string level );
    ~Harl();
};
