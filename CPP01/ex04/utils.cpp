/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:37:42 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/21 15:15:34 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string replace_occurrences(const std::string &content, const std::string &s1, const std::string &s2)
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result.append(content, pos, found - pos);
        result.append(s2);             
        pos = found + s1.length();               
    }
    result.append(content, pos, content.length() - pos);
    return result;
}
