/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 03:52:32 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/08 08:14:32 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("") , sign(false) , gsign(150) , gexecute(150)
{}
Form::Form(const std::string n, const int gs, const int ge) : name(n) , sign(false), gsign(gs), gexecute(ge)
{
    if (gs > 150 || ge > 150)
        throw GradeTooLowException();
    else if ( gs < 1 || ge < 1)
        throw GradeTooHighException();
}
Form::Form(const Form& f) : name(f.name) , sign(f.sign) , gsign(f.gsign) , gexecute(f.gexecute)
{}
Form& Form::operator=(const Form& f)
{
    if (this != &f)
    {
        sign = f.sign;
    }
    return *this;
}

Form::~Form(){}

const char* Form::GradeTooHighException::what() const throw() {
    return "Error: Form Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Error: Form Grade too low!";
}

std::string Form::getName(void) const
{
    return (name);
}

bool Form::getSign(void) const
{
    return (sign);
}

int Form::getGradeExecute(void) const
{
    return (gexecute);
}

int Form::getGradeSign(void) const
{
    return (gsign);
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= gsign)
    {
        sign = true;
    }
    else 
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form: " << f.getName()
	   << " | Signed: " << f.getSign()
	   << " | Grade Required to Sign: " << f.getGradeSign()
	   << " | Grade Required to Execute: " << f.getGradeExecute() << std::endl;
	return os;
}