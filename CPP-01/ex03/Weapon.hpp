/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:10:05 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:10:06 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
# define WEAPON_CLASS_HPP
#include <iostream>
#include <string>

class Weapon {
private:
    std::string _type;

public:
    Weapon(const std::string type);

    const std::string &getType( void ) const;
    void               setType(std::string type);

    ~Weapon( void );
};
