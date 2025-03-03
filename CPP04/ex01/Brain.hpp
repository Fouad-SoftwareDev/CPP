/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:49:58 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/30 18:43:32 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain
{
	private:
		std::string ideas[100];
		
	public:
		Brain();
		~Brain();
		Brain(const Brain& b);
		Brain& operator=(const Brain& b);
		
};

#endif 