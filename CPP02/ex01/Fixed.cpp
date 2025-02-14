/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:21 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/25 18:36:09 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl; 	
}
Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
    value = i << fp;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
    value = roundf(f * (1 << fp));
}

Fixed::Fixed(const Fixed& f):value(f.value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
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

float Fixed::toFloat(void) const
{
    return static_cast<float>(value) / (1 << fp);
}

int Fixed::toInt(void) const
{
    return value >> fp;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
