#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *horde = new Zombie[N]; // Allocating N Zombie objects in a single allocation

    // Initializing each zombie in the horde with the provided name
    for (int i = 0; i < N; ++i) {
        horde[i].set_name(name);
    }

    return horde; // Returning a pointer to the first zombie
}