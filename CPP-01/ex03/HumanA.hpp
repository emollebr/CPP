/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:09:40 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:09:41 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# define HUMANA_CLASS_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include"HumanA.hpp"

class HumanA {
private:
    std::string _name;
    Weapon &_weapon;

public:
    HumanA(const std::string& name, Weapon& weapon);

    void attack() const;

    ~HumanA(void);
};
