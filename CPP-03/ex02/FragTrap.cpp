#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "Fragtrap " << _name << " constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap " << _name << " destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Fragtrap " << _name << " succesfully highFived Guys!" << std::endl;
}