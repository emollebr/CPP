#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

 ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
     std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;
     *this = copy;
 }

ScavTrap    &ScavTrap::operator= (const ScavTrap &other) {
    std::cout << "ScavTrap " << _name << " copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints >= 1) {
        std::cout << "ScavTrap " << _name << " attacks " << target << " with its gatekeeping skills, causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
}