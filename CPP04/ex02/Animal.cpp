/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:43:44 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 16:57:46 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal&a)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = a;
}
Animal& Animal::operator=(const Animal&a)
{
	std::cout << "Animal Copy assigment called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return type;
}

void Animal::makeSound(void) const
{
	  std::cout << "NO SOUND!" << std::endl;
}