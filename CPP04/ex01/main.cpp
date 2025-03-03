/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:51:25 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 19:30:39 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
	
int main()
{
	Animal *zoo[10];
	for (int i = 0; i < 5; i++)
	{
	    zoo[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
	    zoo[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
	    delete zoo[i];
	}
	// Dog b = Dog();
	// {
	// 	Dog c = b;
	// }
	return (0);
}