/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:17:18 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/18 17:33:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& sc)
{
	if (this != &sc)
	{
		*this = sc;
	}
	return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter& sc)
{
	*this = sc;
}

std::string intToString(int value)
{
    std::stringstream ss;
    ss << value;
    return ss.str();
}

void ScalarConverter::convert(const std::string& str)
{
    long l;
    double d;
    char c;
    float f;
    std::string tstr;
    
    tstr = trim(str);
    if (checkifpseudoliterals(tstr) == 1)
        return;
    else if (tstr.length() == 1 && !std::isdigit(tstr[0]))
    {
        c = tstr[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0"<< std::endl;
        return;
    }
    else if ((tstr.find('.') == std::string::npos && tstr.find('f') == std::string::npos) 
            && ((tstr.length() < 12 && (tstr[0] == '-' || tstr[0] == '+'))
            || (std::isdigit(tstr[0]) && tstr.length() < 11)))
    {
        l = std::atol(tstr.c_str());
        caseint(l);
        return;
    }
    else if (tstr.find('.') != std::string::npos && tstr.find('f') != std::string::npos)
    {
        std::cout << "here\n";
        f = std::atof(tstr.c_str());
        casefloat(f);
        return;
    }
    else if (tstr.find('.') != std::string::npos  && tstr.find('f') == std::string::npos)
    {
        d = std::atof(tstr.c_str());
        casedouble(d);
        return;
    }
    std::cout << "Invalid input" <<std::endl;
}

int checkifpseudoliterals(std::string str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::string d = str.substr(0, str.size() - 1);
        std::cout << "double: " << d << std::endl;
        return 1;
    }
     if (str == "-inf" || str == "+inf" || str == "nan") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return 1;
    }
    return (0);
}

void    caseint(long l)
{
    if (l < 32 || l > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(l) << "'" << std::endl;
    if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
    {
        std::cout << "int: out of range" << std::endl;
        std::cout << "float: out of range" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(l)  << std::endl;
        std::cout << "float: " <<static_cast<float>(l) << ".0f" << std::endl;
    }
    std::cout << "double: " <<static_cast<double>(l) << ".0" << std::endl;
}

std::string trim(const std::string& str)
{
    std::size_t first = str.find_first_not_of(" \t\n\r\f\v");
    if (first == std::string::npos)
        return "";
    
    std::size_t last = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(first, (last - first + 1));
}

void casefloat(float f)
{
    long l;

    l = static_cast<long>(f);
    if (l < 32 || l > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(l) << "'" << std::endl;
    if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
    {
        std::cout << "int: out of range" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(l)  << std::endl;
    }
    if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max())
    {
        std::cout << "float: out of range" << std::endl;
        std::cout << "double: conversion  is impossible the float is out of range" << std::endl;
    }
    else
    {
        std::cout << "float: " << f << "f"<< std::endl;
        std::cout << "double: " << static_cast<double>(f)  << std::endl;
    }
}

void casedouble(double d)
{
    long l;

    l = static_cast<long>(d);
    if (l < 32 || l > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(l) << "'" << std::endl;
    if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
    {
        std::cout << "int: out of range" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(l) << ".f"<< std::endl;
    }
    if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
    {
        std::cout << "float: out of range" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(d) << "f"<< std::endl;
    }
    if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
    {
        std::cout << "double: out of range" << std::endl;
    }
    else
    {
        std::cout << "double: " << d << ""<< std::endl;
    }
}