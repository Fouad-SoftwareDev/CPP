/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:06:41 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/16 16:19:53 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::	PhoneBook() : next(0), capacity(8), count(0)
{}
void	PhoneBook::display(void)
{
	std::cout << std::setw(10) << "Index" << "|"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nickname" << "\n";
    for (int i = 0; i < capacity; ++i)
	{
        std::cout << std::setw(10) << i + 1 << "|";
        tab[i].Display();
        std::cout << "\n";
    }
}
void 	PhoneBook::displayone(int i)
{
	std::cout << "index:" << i << "\n" 
		  << "FirstName:" << tab[i - 1].getFirstName() << "\n"
		  << "LastName:" << tab[i - 1].getLastName() << "\n"
		  << "NickName:" << tab[i - 1].getNickname() << "\n"
		  << "PhoneNumber:" << tab[i - 1].getPhoneNumber() << "\n"
		  <<  "DarkSecret :" << tab[i - 1].getDarkestSecret() << "\n";
}
void	PhoneBook::addcontact(Contact NewContact)
{
	tab[next] = NewContact;
	next = (next + 1) % capacity;
	if (count < 8)
	{
		count++;
	}
}