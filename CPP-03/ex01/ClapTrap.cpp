#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

 ClapTrap::ClapTrap(const ClapTrap &copy) {
     std::cout << "ClapTrap " << _name << " copy constructor called" << std::endl;
     *this = copy;
 }

ClapTrap    &ClapTrap::operator= (const ClapTrap &other) {
    std::cout << "ClapTrap " << _name << " copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        _hitPoints -= amount;
    } else {
        std::cout << "ClapTrap " << _name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " is unable to repair itself as it is out of energy points!" << std::endl;
    }
}