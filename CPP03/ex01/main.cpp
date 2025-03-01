/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:35:28 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 17:55:21 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Test default constructor
    std::cout << "\n--- Testing Default Constructor ---" << std::endl;
    ClapTrap ct1;
    ScavTrap st1;

    // Test parameterized constructor
    std::cout << "\n--- Testing Parameterized Constructor ---" << std::endl;
    ClapTrap ct2("Clappy");
    ScavTrap st2("Scavy");

    // // Test copy constructor
    std::cout << "\n--- Testing Copy Constructor ---" << std::endl;
    ClapTrap ct3(ct2);
    ScavTrap st3(st2);

    // // Test copy assignment operator
    std::cout << "\n--- Testing Copy Assignment Operator ---" << std::endl;
    ClapTrap ct4;
    ScavTrap st4;
    ct4 = ct2;
    st4 = st2;

    // // Test attack function (overridden in ScavTrap)
    std::cout << "\n--- Testing Attack Function ---" << std::endl;
    ct2.attack("Enemy A");
    st2.attack("Enemy B");

    // // Test takeDamage and beRepaired
    std::cout << "\n--- Testing Damage and Repair Functions ---" << std::endl;
    ct2.takeDamage(3);
    ct2.beRepaired(5);
    st2.takeDamage(20);
    st2.beRepaired(10);

    // // Test ScavTrap-specific function
    std::cout << "\n--- Testing ScavTrap Guard Gate Function ---" << std::endl;
    st2.guardGate();

    // // Destruction sequence
    std::cout << "\n--- Testing Destruction Sequence ---" << std::endl;

    return 0;
}
