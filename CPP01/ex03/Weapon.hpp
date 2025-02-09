/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:41:39 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/20 16:55:52 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		Weapon(std::string t);
		~Weapon();
		std::string	getType(void);
		void		setType	(std::string t);
};


#endif