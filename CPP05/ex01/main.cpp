/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:17:27 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/08 08:27:47 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        std::cout << "===== TEST 1: Bureaucrat Creation =====" << std::endl;
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 75);
        Bureaucrat b3("Charlie", 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        std::cout << "===== TEST 2: Bureaucrat Grade Modification =====" << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;

        b3.decrementGrade();
        std::cout << b3 << " (Charlie should now have grade 151 -> Exception expected!)" << std::endl; //not reached
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 3: Bureaucrat Creation with Invalid Grade =====" << std::endl;
    try
    {
        Bureaucrat b4("Dave", 0);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b5("Eve", 151);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 4: Form Creation =====" << std::endl;
    try
    {
        Form f1("Tax Form", 50, 30);
        Form f2("Security Clearance", 10, 5);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 5: Form Creation with Invalid Grades =====" << std::endl;
    try
    {
        Form f3("Impossible Form", 0, 10);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Form f4("Invalid Form", 100, 151);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 6: Bureaucrat Signing Forms =====" << std::endl;
    try
    {
        Bureaucrat manager("Manager", 30);
        Form contract("Contract", 40, 20);

        std::cout << contract << std::endl;
        manager.signForm(contract);
        contract.beSigned(manager);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat director("Director", 10);
        Form permit("Building Permit", 15, 5);

        std::cout << permit << std::endl;
        director.signForm(permit);
        permit.beSigned(director);
        std::cout << permit << " (Signed status should now be YES)" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}