/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:20:16 by armitite          #+#    #+#             */
/*   Updated: 2025/02/06 15:10:34 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() {
    std::cout << "---- Testing Constructors ----" << std::endl;
    Fixed a(2.5f);
    Fixed b(2.0f);
    Fixed c(a); // Copy constructor

    std::cout << "a = " << a << std::endl; // Expected: 2.5
    std::cout << "b = " << b << std::endl; // Expected: 2.0
    std::cout << "c (copy of a) = " << c << std::endl; // Expected: 2.5

    std::cout << "\n---- Testing Assignment Operator ----" << std::endl;
    Fixed d;
    d = b;
    std::cout << "d (after d = b) = " << d << std::endl; // Expected: 2.0

    std::cout << "\n---- Testing Comparison Operators ----" << std::endl;
    std::cout << (a > b) << " (Expected: 1)" << std::endl;
    std::cout << (a < b) << " (Expected: 0)" << std::endl;
    std::cout << (a >= c) << " (Expected: 1)" << std::endl;
    std::cout << (b <= d) << " (Expected: 1)" << std::endl;
    std::cout << (a == c) << " (Expected: 1)" << std::endl;
    std::cout << (a != b) << " (Expected: 1)" << std::endl;

    std::cout << "\n---- Testing Arithmetic Operators ----" << std::endl;
    Fixed sum = a + b;
    Fixed diff = a - b;
    Fixed prod = a * b;
    Fixed quot = a / b;

    std::cout << "a + b = " << sum.toFloat() << " (Expected: 4.5)" << std::endl;
    std::cout << "a - b = " << diff.toFloat() << " (Expected: 0.5)" << std::endl;
    std::cout << "a * b = " << prod.toFloat() << " (Expected: 5.0)" << std::endl;
    std::cout << "a / b = " << quot.toFloat() << " (Expected: 1.25)" << std::endl;

    std::cout << "\n---- Testing Increment & Decrement Operators ----" << std::endl;
    Fixed e(1.0f);

    std::cout << "e = " << e << std::endl; // Expected: 1.0
    std::cout << "++e = " << ++e << " (Expected: 1 + epsilon)" << std::endl;
    std::cout << "e++ = " << e++ << " (Expected: 1 + epsilon)" << std::endl;
    std::cout << "After e++: " << e << " (Expected: 1 + 2 * epsilon)" << std::endl;

    std::cout << "--e = " << --e << " (Expected: 1 + epsilon)" << std::endl;
    std::cout << "e-- = " << e-- << " (Expected: 1 + epsilon)" << std::endl;
    std::cout << "After e--: " << e << " (Expected: 1.0)" << std::endl;

    std::cout << "\n---- Testing Min/Max Functions ----" << std::endl;
    Fixed minVal = Fixed::min(a, b);
    Fixed maxVal = Fixed::max(a, b);

    std::cout << "Min(a, b) = " << minVal << " (Expected: 2.0)" << std::endl;
    std::cout << "Max(a, b) = " << maxVal << " (Expected: 2.5)" << std::endl;

    return 0;
}
