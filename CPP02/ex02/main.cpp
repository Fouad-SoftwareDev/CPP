/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:30:05 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/27 14:55:46 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed const c(10);
    Fixed const d(42.42f);

    // Increment and Decrement Operators
    std::cout << "\nIncrement and Decrement tests:" << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a: " << a << std::endl;

    // Arithmetic Operators
    std::cout << "\nArithmetic operations:" << std::endl;
    std::cout << "c + d: " << c + d << std::endl;
    std::cout << "c - d: " << c - d << std::endl;
    std::cout << "c * d: " << c * d << std::endl;
    std::cout << "c / d: " << c / d << std::endl;

    // Comparison Operators
    std::cout << "\nComparison operations:" << std::endl;
    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    // Min and Max Functions
    std::cout << "\nMin and Max tests:" << std::endl;
    std::cout << "Fixed::min(c, d): " << Fixed::min(c, d) << std::endl;
    std::cout << "Fixed::max(c, d): " << Fixed::max(c, d) << std::endl;

    std::cout << "Fixed::min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << b << std::endl;
    std::cout << "Fixed::max(a, b): " << Fixed::max(a, b) << std::endl;

    return 0;
}
