#pragma once
# define FRAGTRAP_CLASS_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string& name);
    ~FragTrap();

    void highFivesGuys(void);
};

