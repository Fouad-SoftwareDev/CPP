/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:56:11 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/15 13:56:23 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int main(int argc, char* argv[])
{
    if (argc < 2)
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
	{
        for (int j = 0; argv[i][j] != '\0'; j++) 
		{
            std::cout << (char)std::toupper(argv[i][j]);
        }
        std::cout << " ";
    }
    std::cout << "\n";
    return (0);
}
