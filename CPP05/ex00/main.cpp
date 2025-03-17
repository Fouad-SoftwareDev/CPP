/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:17:27 by fdahouk           #+#    #+#             */
/*   Updated: 2025/03/08 03:50:35 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Alice", 50);
		Bureaucrat b2("Bob", 120);
		Bureaucrat b3("Charlie", 1);
		
		std::cout << "Test 1: Valid Bureaucrats created:" << std::endl;
		std::cout << b1 << b2 << b3;
		
		std::cout << "\nTest 2: Trying to create Bureaucrats with invalid grades:" << std::endl;
		try
		{
			Bureaucrat b_invalid_high("InvalidHigh", 0);
		}
		catch (const std::exception& e)
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
		
		try
		{
			Bureaucrat b_invalid_low("InvalidLow", 151);
		}
		catch (const std::exception& e)
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
		std::cout << "\nTest 3: Incrementing and Decrementing grades:" << std::endl;
		try
		{
			b1.incrementGrade(); 
			std::cout << "After incrementing b1: " << b1;
		} 
		catch (const std::exception& e)
		{
			std::cout << "Caught exception during increment: " << e.what() << std::endl;
		}
		try
		{
			b2.decrementGrade();
			std::cout << "After decrementing b2: " << b2;
		}
		catch (const std::exception& e)
		{
			std::cout << "Caught exception during decrement: " << e.what() << std::endl;
		}
		Bureaucrat b_copy = b1;
		std::cout << "\nTest 4: Copy constructor:" << std::endl;
		std::cout << "b_copy (copy of b1): " << b_copy;
		Bureaucrat b_assigned("Assigned", 100);
		std::cout << "\nTest 5: Assignment operator:" << std::endl;
		b_assigned = b2;
		std::cout << "b_assigned after assignment from b2: " << b_assigned;
		std::cout << "\nTest 6: Trying to increment/decrement out of bounds:" << std::endl;
		try
		{
			Bureaucrat b_invalid("Invalid", 1);
			b_invalid.incrementGrade();
		} 
		catch (const std::exception& e)
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat b_invalid("Invalid", 150);
			b_invalid.decrementGrade();
		}
		catch (const std::exception& e) 
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	} 
	catch (const std::exception& e) 
	{
		std::cout << "Caught unexpected exception: " << e.what() << std::endl;
	}
	return 0;
}
