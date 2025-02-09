/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:02:27 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/23 12:30:35 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie *newZombie(std::string name);

int main (void)
{
	std::string name = "Nadim";
	std::string name1 = "Nadim1";
	Zombie *z= newZombie(name1);
	z->announce();
	delete z;
	randomChump(name);
	return (0);
}