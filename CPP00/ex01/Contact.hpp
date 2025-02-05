/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:56:33 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/16 16:42:44 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
class Contact
{
private:
    std::string FirstName;
	std::string LastName;
	std::string Nickname;
    std::string	PhoneNumber;
	std::string darkS;

	std::string truncate(const std::string& str) const;
public:
	Contact();
    Contact(std::string fn, std::string ln,std::string nn, std::string pn,std::string ds);

    std::string getFirstName() const ;
    std::string getLastName() const ;
    std::string getNickname() const ;
    std::string getPhoneNumber() const ;
    std::string getDarkestSecret() const;

	void Display()const;
};
#endif