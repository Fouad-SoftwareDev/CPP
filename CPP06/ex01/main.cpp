/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:43:51 by marvin            #+#    #+#             */
/*   Updated: 2025/03/18 19:43:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    data.name = "Alice";
    data.lastname = "Smith";
    data.id = 42;

    uintptr_t serialized = Serializer::serialize(&data);
    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized == &data)
    {
        std::cout << "Success: Pointers match!" << std::endl;
    } else {
        std::cout << "Error: Pointers do not match!" << std::endl;
    }
    return 0;
}