/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:21 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/25 17:42:30 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl; 	
}

Fixed::Fixed(const Fixed& f):value(f.value)
{
	std::cout << "Copy constructor called" << std::endl; 	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl; 	
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &f)
	{
		value = f.value;
	} 
	return *this;
}

int Fixed::getRawBits(void)
{
	std::cout << " getRawbit function called" << std::endl; 	
	return (value);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << " setRawbit function called" << std::endl;
	value = raw;
}