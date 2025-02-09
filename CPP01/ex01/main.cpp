/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:29:07 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/27 16:03:07 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie *tab;
	std::string	name = "Attack";
	int count = 5;

	tab  = zombieHorde(count, name);
	for (int i = 0;i < count; i++)
	{
		tab[i].announce();
	}
	delete[] tab;
	return (0);
}
