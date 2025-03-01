/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:49:48 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 16:38:00 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int			hp;
		int			dmg;
		int			ep;
	
	public:
		~ClapTrap();
		ClapTrap();
		ClapTrap(std::string n);
		ClapTrap(const ClapTrap& cp);
		ClapTrap& operator=(const ClapTrap& cp);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif