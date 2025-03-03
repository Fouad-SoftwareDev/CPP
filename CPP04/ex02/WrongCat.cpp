/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:04:22 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 13:50:39 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl ;
}

WrongCat::WrongCat(const WrongCat& d) : WrongAnimal(d)
{
	std::cout << "WrongCat Copy constructor called" << std::endl ;
	*this = d;
}


WrongCat& WrongCat::operator=(const WrongCat& d)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &d)
        type = d.type;
    return *this;
}

void WrongCat::makeSound(void)
{
	std::cout << "Wrong Cat Sound" << std::endl;
}