/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:24:43 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 18:05:15 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	hp = 100;
    ep = 50;
    dmg = 20;
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hp = 100;
    ep = 50;
    dmg = 20;
    std::cout << "FragTrap Param Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& st) : ClapTrap(st)
{
	std::cout << "FragTrap Copy constructor Called"  << std::endl;	
	*this = st;	
}

FragTrap& FragTrap::operator=(const FragTrap& st)
{
    std::cout << "FragTrap Copy Assignment Operator Called" << std::endl;
    if (this != &st)
    {
        ClapTrap::operator=(st);
    }
    return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (ep >=1 && hp > 0)
	{
		ep--;
		std::cout << "FragTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << std::endl;
	}
	else if ( ep  < 1)
		std::cout << "Running low on Energy point attack Failed" << std::endl;
	else 
		std::cout << "ALL your HP is gone Cannot attack anymore" << std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " requests a positive high five! ✋" << std::endl;
}