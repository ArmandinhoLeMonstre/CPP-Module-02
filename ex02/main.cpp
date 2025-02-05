/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:20:16 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 21:26:15 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

int	main(void)
{
	Fixed a;
	Fixed const b (a);
	Fixed c;
	
	c.setRawBits(12);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	if (a == b)
		std::cout << "a = b" << std::endl;
	if (a != c)
		std::cout << "a != c" << std::endl;
	if (a < c)
		std::cout << "a < c" << std::endl;
	if (c > a)
		std::cout << "c > a" << std::endl;
	
	return (0);
}