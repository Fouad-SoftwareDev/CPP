/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:19 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/25 17:36:29 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
	private:
		int	value;
		static const int fb = 8;
		
	public:
	
		~Fixed();
		Fixed();
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);
		
		int		getRawBits(void);
		void	setRawBits(const int raw);
};

#endif