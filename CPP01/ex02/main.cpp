/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:13:31 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/21 11:18:41 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		s;
	std::string		*ptr;
	std::string& 	ref = s;
	
	s = "HI THIS IS BRAIN";
	ptr = &s;
	ref = s;
	std::cout << "this is the original string address: " << &s << std::endl 
			  << "this is the pointer string address : " << &ptr << std::endl 
			  << "this is the reference string address: " << &ref << std::endl;

	std::cout << std::endl;
	
	std::cout << "this is the original value string: " << s << std::endl 
			  << "this is the pointer value of the string: " << *ptr << std::endl
			  << "this is the reference value of the string: " << ref << std::endl;
	return (0);
}