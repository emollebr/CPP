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
    FragTrap (const FragTrap &copy);
    FragTrap& operator= (const FragTrap &other);
    void highFivesGuys(void);
};

