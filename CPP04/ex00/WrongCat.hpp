/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:04:20 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 13:48:15 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongCat();
		WrongCat(const WrongCat& a);
		WrongCat& operator=(const WrongCat& a);
		~WrongCat();
	
		void makeSound();
};

#endif