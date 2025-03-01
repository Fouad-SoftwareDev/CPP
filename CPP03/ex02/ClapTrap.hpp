/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:49:48 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 16:37:27 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int			hp;
		int			dmg;
		int			ep;
	
	public:
		virtual ~ClapTrap();
		ClapTrap();
		ClapTrap(std::string n);
		ClapTrap(const ClapTrap& cp);
		ClapTrap& operator=(const ClapTrap& cp);
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif