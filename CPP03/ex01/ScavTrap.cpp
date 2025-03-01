/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:24:43 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 17:52:57 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	hp = 100;
    ep = 50;
    dmg = 20;
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hp = 100;
    ep = 50;
    dmg = 20;
    std::cout << "ScavTrap Param Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{
	std::cout << "ScavTrap Copy constructor Called"  << std::endl;	
	*this = st;	
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
    std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
    if (this != &st)
    {
        ClapTrap::operator=(st);
    }
    return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (ep >=1 && hp > 0)
	{
		ep--;
		std::cout << "Scavtrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << std::endl;
	}
	else if ( ep  < 1)
		std::cout << "Running low on Energy point attack Failed" << std::endl;
	else 
		std::cout << "ALL your HP is gone Cannot attack anymore" << std::endl;
}
void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper  Mode" << std::endl;
}