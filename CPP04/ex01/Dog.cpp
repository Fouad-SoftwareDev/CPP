/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:03:47 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 19:28:55 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
	b = new Brain();
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete b;
}

Dog::Dog(const Dog& d) : Animal(d)
{
	std::cout << "Dog Copy constructor called" << std::endl ;
	*this = d;
}


Dog& Dog::operator=(const Dog& d)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &d)
	{
        type = d.type;
		this->b = new Brain();
	}
    return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}