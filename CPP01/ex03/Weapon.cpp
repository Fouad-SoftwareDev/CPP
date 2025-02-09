/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:42:42 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/20 17:46:37 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type("")
{}
Weapon::Weapon(std::string t) : type(t){}

Weapon::~Weapon()
{
	
}
std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string t)
{
	type = t;
}