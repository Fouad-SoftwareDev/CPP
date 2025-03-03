/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:03:47 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 18:52:10 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl ;
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
        type = d.type;
    return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}