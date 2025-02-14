/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:21 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/27 14:53:10 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	//std::cout << "Default constructor called" << std::endl; 	
}
Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
    value = i << fp;
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
    value = roundf(f * (1 << fp));
}

Fixed::Fixed(const Fixed& f):value(f.value)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl; 	
}

Fixed& Fixed::operator=(const Fixed& f)
{
	//std::cout << "Copy assignment called" << std::endl;
	if (this != &f)
	{
		value = f.value;
	} 
	return *this;
}

int Fixed::getRawBits(void)
{
	//std::cout << " getRawbit function called" << std::endl; 	
	return (value);
}

void Fixed::setRawBits(const int raw)
{
	// std::cout << " setRawbit function called" << std::endl;
	value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)(value) / (1 << fp));
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

		bool	Fixed::operator>(const Fixed& f) const
		{
			if (this->value > f.value)
				return true;
			return	false;
		}
		
		bool	Fixed::operator<(const Fixed& f) const
		{
			if (this->value < f.value)
				return true;
			return	false;
		}

		bool	Fixed::operator>=(const Fixed& f) const
		{
			if (this->value >+ f.value)
				return true;
			return	false;
		}

		bool	Fixed::operator<=(const Fixed& f) const
		{
			if (this->value <= f.value)
				return true;
			return	false;
		}
		
		bool	Fixed::operator==(const Fixed& f) const
		{
			if (this->value == f.value)
				return true;
			return	false;
		}
		
		bool	Fixed::operator!=(const Fixed& f) const
		{
			if (this->value != f.value)
				return true;
			return	false;
		}

		Fixed	Fixed::operator+(const Fixed& f) const
		{
			Fixed temp;
			temp.value = this->value + f.value;
			return temp;
		}
		
		Fixed	Fixed::operator-(const Fixed& f) const
		{
			Fixed temp;
			temp.value = this->value - f.value;
			return temp;
		}
		
		Fixed	Fixed::operator*(const Fixed& f) const
		{
			Fixed temp;
			temp.value = (this->value * f.value) / (1 << fp);
			return temp;
		}

		Fixed	Fixed::operator/(const Fixed& f) const
		{
			Fixed temp;
			temp.value = (this->value * (1 << fp)) / f.value;
			return temp;
		}


		Fixed	Fixed::operator++(int)
		{
			Fixed	temp = *this;
			this->value++;
			return temp;
		}
		
		Fixed	Fixed::operator--(int)
		{
			Fixed	temp = *this;
			this->value--;
			return temp;
		}

		Fixed&	Fixed::operator--()
		{
			this->value--;
			return *this;
		}
		
		Fixed&	Fixed::operator++()
		{
			this->value++;
			return *this;
		}
		
		
		const Fixed& Fixed::min(const Fixed& f1,const Fixed& f2)
		{
			if (f1.value > f2.value)
				return f2;
			return f1;
		}
		
		Fixed& Fixed::min( Fixed& f1, Fixed& f2)
		{
			if (f1.value > f2.value)
				return f2;
			return f1;
		}
		
		const Fixed& Fixed::max(const Fixed& f1,const Fixed& f2)
		{
			if (f1.value > f2.value)
				return f1;
			return f2;
		}
		
		Fixed& Fixed::max(Fixed& f1,Fixed& f2)
		{
			if (f1.value > f2.value)
				return f1;
			return f2;
		}