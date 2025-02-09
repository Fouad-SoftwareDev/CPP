/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:43:46 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/20 18:05:54 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string n,Weapon &w) : name(n) , wpn(w)
{}

HumanA::~HumanA()
{
	
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << wpn.getType() <<std::endl;
}