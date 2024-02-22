#include <iostream>
#include <string>
#include "Weapon.hpp"
#include"HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

void HumanA::attack() const {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA destructor called" << std::endl;
}