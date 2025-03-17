/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:14:44 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 15:49:45 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& sh);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& sh);
		~RobotomyRequestForm();

		virtual void FormAction() const;
		class RobotomyFailed : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
