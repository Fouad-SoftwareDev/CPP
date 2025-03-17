/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:16:09 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 13:19:46 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include <exception>

class Form;
class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	
	public:

		Bureaucrat();
		Bureaucrat(const std::string& n, int g);
		Bureaucrat(const Bureaucrat& b);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& b);

		std::string getName(void) const;
		int			getGrade(void) const;

		void 	incrementGrade(void);
		void 	decrementGrade(void);
		void 	signForm(Form& f);	

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif