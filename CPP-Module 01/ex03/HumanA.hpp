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
