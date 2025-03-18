/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:11:07 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/18 17:20:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Enter one argument not more" << std::endl;
		return (-1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}