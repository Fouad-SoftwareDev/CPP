/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:01:07 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 20:01:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
    private:
        T* tab;
        unsigned int tabsize;

    public:

        Array()
        {
            tab = new T[0];
            tabsize = 0;
        }
         Array(unsigned int n)
         {
            tab = new T[n];
            tabsize = n;
         }

        Array(const Array& a)
        {
            tab = new T[a.tabsize];
            tabsize = a.tabsize;
            for (unsigned int i = 0; i < a.tabsize; i++)
            {
                tab[i] = a.tab[i];
            }
        }

        ~Array()
        {
            delete[] tab;
        }

        Array& operator=(const Array& a)
        {
            if (this != &a)
            {
                delete[] tab;
                tabsize = a.tabsize;
                tab = new T[a.tabsize];
                for (unsigned int i = 0; i < a.tabsize; i++)
                {
                    tab[i] = a.tab[i];
                }
            }
            return *this;
        }

        T& operator[](unsigned int i)
        {
            if (i >= tabsize)
            {
                throw IndexOutOfBounds();
            }
            return tab[i];
        }

        unsigned int size() const
        {
            return tabsize;
        }
        class IndexOutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw()
                {
                    return "Index out of bounds";
                }
		};
};

#endif