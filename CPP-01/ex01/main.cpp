/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:08:34 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:08:35 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main() {
    int numZombies = 5;
    std::string zombieName = "Horde Zombie";

    Zombie* horde = zombieHorde(numZombies, zombieName);
    
    std::cout << "Horde announces:\n";
    for (int i = 0; i < numZombies; ++i) {
        horde[i].announce();
    }
    delete[] horde;

    return 0;
}
