/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:03:56 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 16:59:14 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& d);
		Cat& operator=(const Cat& d);
		~Cat();
		
		void makeSound(void) const;
};

#endif