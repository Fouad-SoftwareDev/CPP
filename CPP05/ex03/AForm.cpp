/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 03:52:32 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 15:26:39 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("") , sign(false) , gsign(150) , gexecute(150)
{}
AForm::AForm(const std::string n, const int gs, const int ge) : name(n) , sign(false), gsign(gs), gexecute(ge)
{
    if (gs > 150 || ge > 150)
        throw GradeTooLowException();
    else if ( gs < 1 || ge < 1)
        throw GradeTooHighException();
}
AForm::AForm(const AForm& f) : name(f.name) , sign(f.sign) , gsign(f.gsign) , gexecute(f.gexecute)
{}
AForm& AForm::operator=(const AForm& f)
{
    if (this != &f)
    {
        sign = f.sign;
    }
    return *this;
}

AForm::~AForm(){}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Error: AForm Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Error: AForm Grade too low!";
}
const char* AForm::GradeTooLowToExecuteException::what() const throw()
{
    return "Error: Grade too low to execute this form";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Error: Form is not signed";
}

std::string AForm::getName(void) const
{
    return (name);
}

bool AForm::getSign(void) const
{
    return (sign);
}

int AForm::getGradeExecute(void) const
{
    return (gexecute);
}

int AForm::getGradeSign(void) const
{
    return (gsign);
}

void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= gsign)
    {
        sign = true;
    }
    else 
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << "AForm: " << f.getName()
	   << " | Signed: " << f.getSign()
	   << " | Grade Required to Sign: " << f.getGradeSign()
	   << " | Grade Required to Execute: " << f.getGradeExecute() << std::endl;
	return os;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (sign == false)
        throw FormNotSignedException();
    if (gexecute < executor.getGrade())
        throw GradeTooLowToExecuteException();

    FormAction();
}