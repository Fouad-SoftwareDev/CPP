/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:42:40 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/20 18:02:26 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("")
{}

HumanB::HumanB(std::string n)
{
	name = n;
}

HumanB::~HumanB()
{
	
}
void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << wpn->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	wpn = &w;
}