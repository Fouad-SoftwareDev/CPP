/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:49:32 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 16:38:08 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "destructor Called" << std::endl;
}

ClapTrap::ClapTrap() : name(""),  hp(10), dmg(0), ep(10)
{
	std::cout << "Default constructor  Called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& cp)
{
	std::cout << "Copy constructor  Called" << std::endl;
	*this = cp;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& cp)
{
	std::cout << "Copy assignment  Called" << std::endl;
	if (this != &cp)
	{
		name = cp.name;
		dmg = cp.dmg;
		hp = cp.hp;
		ep = cp.ep;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string n) : name(n), hp(10), dmg(0), ep(10)
{
		std::cout << "Param constructor  Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (ep >=1 && hp > 0)
	{
		ep--;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << dmg << " points of damage!" << std::endl;
	}
	else if ( ep  < 1)
		std::cout << "Running low on Energy point attack Failed" << std::endl;
	else 
		std::cout << "ALL your HP is gone Cannot attack anymore" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp <= 0 || ep < 0)
	{
		if (hp <= 0)
			std::cout << "Cannot repair the trap has lost all its HP(got destroyed)" << std::endl;
		else
			std::cout << "Cannot repair the trap due to low energy points" << std::endl;
	}
	else
	{
		ep--;
		if (hp + amount >= 10)
			hp = 10;
		else
			hp += amount;
		std::cout << "Repaired successfully the HP of the Claptrap "<< name <<  " is " << hp << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0 )
	{
		std::cout << "Cannot take more damage the trap has already lost all its HP(got destroyed)" << std::endl;
	}
	else
	{
		if (hp < (int)amount)
		{
			hp = 0;
			std::cout << "Critical damage has  been done ClapTrap "<< name <<  " got destroyed" << std::endl;
		}
		else
		{
			hp -= amount;
			std::cout << "Damage has been dealt the HP of the Claptrap "<< name <<  " is " << hp << std::endl;
		}
	}
}