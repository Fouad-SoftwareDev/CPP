/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:14:57 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/21 18:18:01 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl h;
	if (argc != 2)
	{
		std::cout << "number of argument should be 2" << std::endl;
		return (-1);
	}
	else
	{
		h.complain(argv[1]);
	}
	return (0);
}