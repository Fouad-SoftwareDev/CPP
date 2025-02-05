/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:33:11 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/16 16:03:08 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): FirstName(""), LastName(""), Nickname(""), PhoneNumber(""), darkS("") {}
Contact::Contact(std::string fn, std::string ln,std::string nn, std::string pn,std::string ds) : FirstName(fn), LastName(ln), Nickname(nn), PhoneNumber(pn),darkS(ds)
{
}
std::string Contact:: getFirstName() const { return FirstName; }
std::string Contact:: getLastName() const { return LastName; }
std::string Contact:: getNickname() const { return Nickname; }
std::string Contact:: getPhoneNumber() const { return PhoneNumber; }
std::string Contact:: getDarkestSecret() const { return darkS; }
std::string Contact::truncate(const std::string& str) const
{
	if (str.length() > 10)
	{
	    return str.substr(0, 9) + ".";
	}
	return str;
}
void Contact::Display(void)const
{
	std::cout << std::setw(10) << truncate(FirstName) << "|"
	  << std::setw(10) << truncate(LastName) << "|"
	  << std::setw(10) << truncate(Nickname) << "|";
}
