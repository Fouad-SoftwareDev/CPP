/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:19 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/27 14:50:32 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int		value;
		static const int fp = 8;
		
	public:
	
		~Fixed();
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);
		
		int		getRawBits(void);
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;


		bool	operator>(const Fixed& f)const;
		bool	operator<(const Fixed& f)const;
		bool	operator>=(const Fixed& f)const;
		bool	operator<=(const Fixed& f)const;
		bool	operator==(const Fixed& f)const;
		bool	operator!=(const Fixed& f)const;


		Fixed	operator+(const Fixed& f)const;
		Fixed	operator-(const Fixed& f)const;
		Fixed	operator*(const Fixed& f)const;
		Fixed	operator/(const Fixed& f)const;


		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed&	operator--();
		Fixed&	operator++();
		
		
		static const Fixed& min(const Fixed& f1,const Fixed& f2);
		static Fixed& min( Fixed& f1, Fixed& f2);
		
		static const Fixed& max(const Fixed& f1,const Fixed& f2);
		static Fixed& max(Fixed& f1,Fixed& f2);
		
};
	
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif