#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie()
{
     std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " destroyed" << std::endl;    
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
