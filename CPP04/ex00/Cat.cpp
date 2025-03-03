/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:04:01 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 19:29:36 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl ;
	type = "Cat";
}
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl ;
}

Cat::Cat(const Cat& d) : Animal(d)
{
	std::cout << "Cat Copy constructor called" << std::endl ;
	*this = d;
}


Cat& Cat::operator=(const Cat& d)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &d)
	{
        type = d.type;
	
	}
    return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}