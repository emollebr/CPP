/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:08:25 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:08:27 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
