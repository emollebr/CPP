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