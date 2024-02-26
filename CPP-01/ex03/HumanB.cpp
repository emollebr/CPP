/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:09:51 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:09:52 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include"HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name) {
}

void HumanB::setWeapon(Weapon& newWeapon) {
    _weapon = &newWeapon;
}

void HumanB::attack() const {
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attacks with their bare hands" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "HumanB destructor called" << std::endl;
}
