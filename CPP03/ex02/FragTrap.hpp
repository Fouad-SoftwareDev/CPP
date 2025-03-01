/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:25:05 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/28 18:01:54 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& st);
		FragTrap& operator=(const FragTrap& st);
		~FragTrap();

		void	attack(const std::string& target);
		void 	highFivesGuys(void);
};

#endif