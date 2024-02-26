/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:10:01 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:10:02 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type) {
}

const std::string& Weapon::getType() const {
    return _type;
}

void Weapon::setType(const std::string type) {
    _type = type;
}

Weapon::~Weapon(void) {
    std::cout << "Weapon destructor called" << std::endl;
}
