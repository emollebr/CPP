/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:11:41 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:11:42 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main()
{
    Harl   man;

    man.complain("DEBUG");
    man.complain("INFO");
    man.complain("WARNING");
    man.complain("ERROR");
}
