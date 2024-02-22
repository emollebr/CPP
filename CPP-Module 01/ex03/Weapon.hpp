#pragma once 
# define WEAPON_CLASS_HPP
#include <iostream>
#include <string>

class Weapon {
private:
    std::string _type;

public:
    Weapon(const std::string type);

    const std::string &getType( void ) const;
    void               setType(std::string type);

    ~Weapon( void );
};