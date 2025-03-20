/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:08:37 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 16:08:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T const &a, T const &b)
{
    if (a == b)
    {
        return (b);
    }
    if (a > b)
    {
        return (b);
    }
    else
    {
        return (a);
    }
}

template <typename T>
T max(T const &a, T const &b)
{
    if (a == b)
    {
        return (b);
    }
    if (a > b)
    {
        return (a);
    }
    else
    {
        return (b);
    }
}
#endif