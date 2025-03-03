/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:49:51 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 18:30:42 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructot called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "";
	}
}
Brain::~Brain()
{
	std::cout << "Brain Default constructot called" << std::endl;
}

Brain::Brain(const Brain& b)
{
	*this = b;
}

Brain& Brain::operator=(const Brain& b)
{
	if (this != &b)
	{
		for (int i= 0; i < 100;i++)
		{
			ideas[i] = b.ideas[i];
		}
	}
	return *this;
}