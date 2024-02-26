#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap bob("Bob");
    ClapTrap jim("Jim");   

    bob.attack("Jim");
    jim.takeDamage(0);
    jim.beRepaired(2);
    jim.attack("Bob");
    bob.takeDamage(0);

    return 0;
}