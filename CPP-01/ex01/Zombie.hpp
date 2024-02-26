/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:08:45 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:08:46 by emollebr         ###   ########.fr       */
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
    Zombie( void );

    void set_name(std::string name);

    void announce( void );

    ~Zombie( void );
};

Zombie* zombieHorde(int N, std::string name);
