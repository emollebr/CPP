/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:09:46 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:09:47 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# define HUMANB_CLASS_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon *_weapon;

public:
    HumanB(const std::string& name);

    void setWeapon(Weapon& newWeapon);

    void attack() const;

    ~HumanB(void);
};
