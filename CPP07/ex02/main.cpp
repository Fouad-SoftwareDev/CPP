/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:56:26 by marvin            #+#    #+#             */
/*   Updated: 2025/03/20 21:50:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Array.hpp"

int main() {
    // Test default constructor
    Array<int> emptyArr;
    try {
        std::cout << "Accessing emptyArr[0]: ";
        std::cout << emptyArr[0] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test parameterized constructor
    Array<int> intArr(5);
    std::cout << "intArr size: " << intArr.size() << std::endl;
    for (unsigned int i = 0; i < intArr.size(); ++i) {
        intArr[i] = i * 2;
    }
    std::cout << "intArr elements: ";
    for (unsigned int i = 0; i < intArr.size(); ++i) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    Array<int> copiedArr(intArr);
    copiedArr[0] = 100;
    std::cout << "Copied elements: ";
    for (unsigned int i = 0; i < copiedArr.size(); ++i) {
        std::cout << copiedArr[i] << " ";
    }
    std::cout << std::endl;
    // Test assignment operator
    Array<int> assignedArr;
    assignedArr = intArr;
    assignedArr[1] = 200;
    std::cout << "Original intArr[1]: " << intArr[1] << std::endl;
    std::cout << "Assigned assignedArr[1]: " << assignedArr[1] << std::endl;

    // Test out of bounds exception
    try {
        std::cout << "Accessing intArr[10]: ";
        std::cout << intArr[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    // Test with strings
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";
    std::cout << "strArr elements: ";
    for (unsigned int i = 0; i < strArr.size(); ++i) {
        std::cout << strArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}