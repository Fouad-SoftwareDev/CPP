/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:17:27 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 16:01:25 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::srand(std::time(0));


	std::cout << "\033[33m" << std::endl << "Test ex02" << "\033[0m" << std::endl;

	std::cout << "\033[33m" << std::endl << "Test ex02 ShrubberyCreationForm" << "\033[0m" << std::endl;
	Bureaucrat Mr_Shrubby("Mr_Shrubby", 130);
	ShrubberyCreationForm Shrubby_form("Hello");
	std::cout << std::endl;
    Mr_Shrubby.executeForm(Shrubby_form);
	std::cout << Shrubby_form;
	Mr_Shrubby.signForm(Shrubby_form);
    Mr_Shrubby.executeForm(Shrubby_form);

	std::cout << Shrubby_form;
	std::cout << "\033[33m" << std::endl << "Test ex02 RobotomyRequestForm" << "\033[0m" << std::endl;
	RobotomyRequestForm Robo_form("I am a robo form");
	Bureaucrat Mr_Robo("Mr_Robo", 45);

	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.signForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);

	std::cout << "\033[33m" << std::endl << "Test ex02 PresidentialPardonForm" << "\033[0m" << std::endl;
	PresidentialPardonForm President_form("I am a robo form");
	Bureaucrat Mr_President("Mr_President", 5);

	Mr_Robo.executeForm(President_form);
	Mr_Robo.signForm(President_form);

	Mr_President.executeForm(President_form);
	Mr_President.signForm(President_form);
	Mr_President.executeForm(President_form);
	std::cout << President_form;
	return (0);
}