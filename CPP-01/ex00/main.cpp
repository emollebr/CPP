/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:07:49 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:07:51 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie;
    randomChump("Stack Zombie");
    return 0;
}
