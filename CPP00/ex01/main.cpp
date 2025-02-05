/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:29:53 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/15 17:27:01 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <stdexcept>
#include <limits>

void	generatorPrompt()
{
	std::cout << "Enter a Command:\n"
			  << "1.ADD\n"
			  << "2.Search\n"
			  << "3.Exit\n";
}

Contact	ADD()
{
	std::string	fn,ln,nn,pn,ds;
	
	std::cout << "Enter First Name: ";
    std::getline(std::cin, fn);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, ln);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nn);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, pn);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, ds);
	if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
	{
		throw std::invalid_argument("No empty fields are allowed!, Addition Failed");
	}
	return (Contact(fn,ln,nn,pn,ds));
}

int askforIndex()
{
	int			index;

	while (true)
    {
        std::cout << "Enter the index of the contact for more info (1-8): ";
        std::cin >> index;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
        }
        else if (index >= 1 && index <= 8)
        {
            return index;
        }
        else
        {
            std::cout << "Invalid index. Please enter a number between 1 and 8.\n";
        }
    }
}
int main()
{
	std::string	input;
	PhoneBook	PB;
	int			added;
	int			index;
	
	added = 0;
	while (1)
	{
		if (input != "Search")
			generatorPrompt();
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			try
			{
                Contact newContact = ADD();
                PB.addcontact(newContact);
                std::cout << "Contact added successfully!" << std::endl;
				if (added == 0)
					added = 1;
            }
			catch (const std::invalid_argument& e)
			{
                std::cerr << e.what()<< std::endl;
            }
		}
		else if (input == "Search")
		{
			if (added != 0)
			{
				PB.display();
				index = askforIndex();
				if (index < 0)
					std::cout << "You can pick a number Between 1 and 8 only\n";
				else
					PB.displayone(index);
			}
		}
		else if (input == "Exit")
		{
			return (0);		
		}
	}
	return (0);
}
