/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:28:51 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/09 15:49:55 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery", 145, 137)
{
	target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& t) : AForm("shrubbery", 145, 137)
{
	target = t;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& sh) :AForm(sh)
{
	target = sh.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& sh)
{
	if (this != &sh)
	{
		AForm::operator=(sh);
		target = sh.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
void ShrubberyCreationForm::FormAction() const
{
	std::string filename = target + "_shrubbery";
	std::ofstream outfile(filename.c_str());

    if (!outfile)
	{
        std::cout << "Error: Could not create the shrubbery file!" << std::endl;
        return;
    }
	outfile << "       *" << std::endl;
    outfile << "      ***" << std::endl;
    outfile << "     *****" << std::endl;
    outfile << "    *******" << std::endl;
    outfile << "   *********" << std::endl;
    outfile << "  ***********" << std::endl;
    outfile << " *************" << std::endl;
    outfile << "***************" << std::endl;
    outfile << "      |||" << std::endl;
    outfile << "      |||" << std::endl;
    outfile << "      |||" << std::endl;
	outfile.close();

	std::cout << "Shrubbery created at " << filename << std::endl;
}