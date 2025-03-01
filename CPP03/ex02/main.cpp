/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:35:28 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 18:07:29 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    // Test ClapTrap
    std::cout << "\n--- Testing ClapTrap ---" << std::endl;
    ClapTrap clap1("Clappy");
    clap1.attack("target1");
    clap1.takeDamage(3);
    clap1.beRepaired(5);

    ClapTrap clap2 = clap1; // Copy constructor
    clap2.attack("target2");

    ClapTrap clap3;
    clap3 = clap1; // Copy assignment
    clap3.takeDamage(8);
    clap3.beRepaired(2);

    // Test FragTrap
    std::cout << "\n--- Testing FragTrap ---" << std::endl;
    FragTrap frag1("Fraggy");
    frag1.attack("enemy1");
    frag1.takeDamage(50);
    frag1.beRepaired(40);
    frag1.highFivesGuys();

    FragTrap frag2 = frag1; // Copy constructor
    frag2.attack("enemy2");

    FragTrap frag3;
    frag3 = frag1; // Copy assignment
    frag3.takeDamage(70);
    frag3.beRepaired(30);
    frag3.highFivesGuys();

    // Test polymorphism
    std::cout << "\n--- Testing Polymorphism ---" << std::endl;

    return 0;
}
