#include <iostream>
#include <string>
#include "Zombie.hpp"

int main() {
    // Creating a Zombie on the heap
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie;

    // Creating a Zombie on the stack
    randomChump("Stack Zombie");

    return 0;
}