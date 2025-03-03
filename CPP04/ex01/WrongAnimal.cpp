/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:04:58 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 13:13:41 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal&a)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = a;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal&a)
{
	std::cout << "WrongAnimal Copy assigment called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal Sound" << std::endl;
}