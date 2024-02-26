#pragma once
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const std::string& name);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};
