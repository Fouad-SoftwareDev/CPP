/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 03:52:39 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 15:47:09 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
#define	AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				sign;
		const int			gsign;
		const int			gexecute;
	
	public:
		
		AForm();
		AForm(const std::string n, const int gs, const int ge);
		AForm(const AForm& f);
		AForm& operator=(const AForm& f);
		virtual ~AForm();

		virtual void	FormAction() const = 0;

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

		class GradeTooLowToExecuteException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		std::string			getName(void) const;
		bool 				getSign(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecute(void) const;
		void				beSigned(Bureaucrat& b);

		void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& b);

#endif