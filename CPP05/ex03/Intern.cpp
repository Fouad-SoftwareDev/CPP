/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:03:15 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 21:09:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& i)
{
    (void) i;
}

Intern& Intern::operator=(const Intern& i)
{
    (void) i;
    return *this;
}

Intern::~Intern()
{
    
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int i = 0;
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (i < 3 && formName != forms[i])
		i++;
	
	switch (i)
	{
	    case 0:
	    	std::cout << "Intern creates " << formName << "\n";
	    	return (new ShrubberyCreationForm(target));
	    case 1:
	    	std::cout << "Intern creates " << formName << "\n";
	    	return (new RobotomyRequestForm(target));
	    case 2:
	    	std::cout << "Intern creates " << formName << "\n";
	    	return (new PresidentialPardonForm (target));
	    default:
	    	std::cout << "Form : " << formName << "is not valid Form" << std::endl;
	    	return NULL;
	}
}