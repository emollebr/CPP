#pragma once
# define ZOMBIE_CLASS_HPP
#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string _name);

    void announce( void );

    ~Zombie( void );
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);