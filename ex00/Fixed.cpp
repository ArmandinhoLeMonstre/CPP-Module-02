/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:38:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 12:39:33 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {

	std::cout << "Default Constructor called" << std::endl;
	this->_nbr = 0;
	
	return ;
}

Fixed::Fixed(const Fixed &copy) {

	std::cout << "Copy constructor called" << std::endl;
	this->_nbr = copy.getRawBits();
	
	return ;
}

Fixed & Fixed::operator=(const Fixed &assign) {

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &assign)
		this->_nbr = assign.getRawBits();

	return (*this);
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int		Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	
	return (this->_nbr);
	
}

void	Fixed::setRawBits(int const raw) {

	this->_nbr = raw;

	return ;
}