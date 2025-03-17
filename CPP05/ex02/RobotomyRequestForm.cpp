/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:14:27 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 15:55:43 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	target = "";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& t) : AForm("RobotomyRequestForm", 72, 45)
{
	target = t;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sh) :AForm(sh)
{
	target = sh.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& sh)
{
	if (this != &sh)
	{
		AForm::operator=(sh);
		target = sh.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::FormAction() const
{
	std::cout << "Making Drilling noises" << std::endl;

    std::srand(std::time(0));
    if (std::rand() % 2 == 1)
	{
        std::cout << getName() << " has been robotomized successfully!" << std::endl;
    }
	else
	{
		throw RobotomyFailed();
    }
}

const char* RobotomyRequestForm::RobotomyFailed::what() const throw()
{
    return "Robotomy failed";
}