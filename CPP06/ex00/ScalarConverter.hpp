/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:45:01 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/18 17:21:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
	private:
		
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& sc);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& sc);
	
		static void	convert(const std::string& str);
};
int			checkifpseudoliterals(std::string str);
void		casedouble(double d);
void		casefloat(float f);
void    	caseint(long l);
std::string trim(const std::string& str);
#endif