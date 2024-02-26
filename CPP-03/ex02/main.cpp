#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap bob("Bob");
    ScavTrap jim("Jim");
    FragTrap rob("Rob");

    bob.attack("Jim");
    jim.takeDamage(0);
    jim.beRepaired(2);
    jim.guardGate();
    jim.attack("Bob");
    bob.takeDamage(20);
    rob.attack("Jim");
    rob.highFivesGuys();
    return 0;
}