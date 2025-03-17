/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 03:52:39 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/08 08:18:50 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define	FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			gsign;
		const int			gexecute;
	
	public:
		
		Form();
		Form(const std::string n, const int gs, const int ge);
		Form(const Form& f);
		Form& operator=(const Form& f);
		~Form();

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

		std::string			getName(void) const;
		bool 				getSign(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecute(void) const;
		void				beSigned(Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& b);


#endif