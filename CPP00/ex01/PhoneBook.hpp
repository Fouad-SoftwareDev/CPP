/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:56:52 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/16 18:10:02 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact tab[8];
	int		next;
	int		capacity;
	int		count;

public:

	PhoneBook();
	void	addcontact(Contact NewContact);
	void	display(void);
	void	displayone(int i);
};
#endif
	