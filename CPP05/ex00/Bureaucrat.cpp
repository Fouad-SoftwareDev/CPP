/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:16:49 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/08 08:07:22 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat() : name(""), grade(150)
{}

Bureaucrat::Bureaucrat(const std::string& n, int g) : name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	else if( g > 150)
		throw GradeTooLowException();
	grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.name) , grade(b.grade)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	if (this != &b)
	{
		grade = b.grade;
	}
	return *this;
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}
std::string Bureaucrat::getName(void) const
{
	return (name);
}

void Bureaucrat::incrementGrade(void)
{
	if (grade == 1)
		throw GradeTooHighException();
	else 
		grade--;
}
void Bureaucrat::decrementGrade(void)
{
	if (grade == 150)
		throw GradeTooLowException();
	else 
		grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Error: Bureaucrat Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Error: Bureaucrat Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return os;
}