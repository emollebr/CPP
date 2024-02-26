/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:08:51 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:08:52 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].set_name(name);
    }
    return horde;
}
