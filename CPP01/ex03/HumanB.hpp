/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:45:45 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/20 18:01:40 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string	name;
			Weapon	*wpn;

	public:
			HumanB();
			HumanB(std::string n);
			~HumanB();
			void 	attack(void);
			void	setWeapon(Weapon &w);
};

#endif