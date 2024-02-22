#pragma once
# define ZOMBIE_CLASS_HPP
#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie();

    void set_name(std::string name);

    void announce( void );

    ~Zombie( void );
};

Zombie* zombieHorde(int N, std::string name);