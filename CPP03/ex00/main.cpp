/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:49:12 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 14:14:57 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n--- Testing Default Constructor ---" << std::endl;
    ClapTrap defaultClapTrap;
    defaultClapTrap.attack("TargetDummy");
    defaultClapTrap.takeDamage(5);
    defaultClapTrap.beRepaired(3);

    std::cout << "\n--- Testing Parameterized Constructor ---" << std::endl;
    ClapTrap paramClapTrap("Clappy");
    paramClapTrap.attack("Bandit");
    paramClapTrap.takeDamage(4);
    paramClapTrap.beRepaired(6);

    std::cout << "\n--- Testing Copy Constructor ---" << std::endl;
    ClapTrap copiedClapTrap(paramClapTrap);
    copiedClapTrap.attack("Scavenger");
    copiedClapTrap.takeDamage(8);
    copiedClapTrap.beRepaired(2);

    std::cout << "\n--- Testing Copy Assignment Operator ---" << std::endl;
    ClapTrap assignedClapTrap;
    assignedClapTrap = paramClapTrap;
    assignedClapTrap.attack("Goliath");
    assignedClapTrap.takeDamage(7);
    assignedClapTrap.beRepaired(1);

    std::cout << "\n--- Testing Edge Cases ---" << std::endl;
    std::cout << "Attacking with 0 Energy Points:" << std::endl;
    for (int i = 0; i < 12; ++i) // Exhausting energy points
        paramClapTrap.attack("Training Dummy");

    std::cout << "Taking Damage Beyond Destruction:" << std::endl;
    paramClapTrap.takeDamage(15); // Exceeding HP limit

    std::cout << "Trying to Repair After Destruction:" << std::endl;
    paramClapTrap.beRepaired(5);

    std::cout << "\n--- Destructors Will Be Called Automatically ---" << std::endl;
    return 0;
}
