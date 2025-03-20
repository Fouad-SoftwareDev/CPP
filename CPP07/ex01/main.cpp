/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:19:21 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 19:19:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"



void display0(int & i)
{
	std::cout << i  << std::endl;
}

template <typename T>
void display0T(T & t)
{
	std::cout << t  << std::endl;
}

int main(void)
{
	int tab[4] = {1, 2, 3, 4};
    ::iter(tab, 4, display0);
	::iter(tab, 4, display0T);
	std::string ts[3] = {
	"Salut",
	"Ca",
	"Va ?"
	};
	::iter(ts, 3, display0T);
}