#include <iostream>
#include <string>
#include "Zombie.hpp"

int main() {
    int numZombies = 5; // Number of zombies in the horde
    std::string zombieName = "Horde Zombie"; // Name for each zombie

    // Create a zombie horde
    Zombie* horde = zombieHorde(numZombies, zombieName);

    // Announce each zombie in the horde
    std::cout << "Horde announces:\n";
    for (int i = 0; i < numZombies; ++i) {
        horde[i].announce();
    }

    // Deallocate memory for the zombie horde
    delete[] horde;

    return 0;
}