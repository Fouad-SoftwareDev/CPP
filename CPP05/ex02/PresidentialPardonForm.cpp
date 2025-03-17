/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:15:03 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 15:49:19 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	target = "";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& t) : AForm("PresidentialPardonForm", 25, 5)
{
	target = t;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& sh) :AForm(sh)
{
	target = sh.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& sh)
{
	if (this != &sh)
	{
		AForm::operator=(sh);
		target = sh.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::FormAction() const
{
	std::cout << "Informs that " << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
