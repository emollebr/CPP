#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap bob("Bob");
    ScavTrap jim("Jim");   

    bob.attack("Jim");
    jim.guardGate();
    jim.attack("Bob");
    bob.takeDamage(20);
    return 0;
}