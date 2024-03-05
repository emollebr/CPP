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

 FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
     std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
     *this = copy;
 }

FragTrap    &FragTrap::operator= (const FragTrap &other) {
    std::cout << "FragTrap " << _name << " copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}


void    FragTrap::highFivesGuys()
{
    std::cout << "Fragtrap " << _name << " highfives some guys!" << std::endl;
}