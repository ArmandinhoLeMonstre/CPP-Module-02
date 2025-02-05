/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:35:24 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 19:32:16 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <cmath>

Fixed::Fixed(void) {

	std::cout << "Constructor called" << std::endl;
	this->_nbr = 0;
	
	return ;
}
Fixed::Fixed(float const n) {

	std::cout << "Constructor float called" << std::endl;
	this->_nbr = roundf(n * (1 << this->_bits));
	
	return ;
}
Fixed::Fixed(int const n) {

	std::cout << "Constructor int called" << std::endl;
	this->_nbr = n << this->_bits;
	
	return ;
}

Fixed::Fixed(Fixed const &copy) {

	std::cout << "Copy constructor called" << std::endl;
	this->_nbr = copy.getRawBits();

	return ;
}

Fixed &Fixed::operator=(const Fixed &assignement) {

	std::cout << "Operator function called" << std::endl;
	if (this != &assignement)
		this->_nbr = assignement.getRawBits();
	
	return (*this);
}

int		Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	
	return (this->_nbr);
	
}

void	Fixed::setRawBits(int const raw) {

	this->_nbr = raw;

	return ;
}

float Fixed::toFloat( void ) const {

	float nbr_float;
	
	nbr_float = ((float)this->_nbr / (1 << this->_bits));
	
	return (nbr_float);
}

int	Fixed::toInt(void) const {
	
	int	nbr_int;

	nbr_int = ((int)(roundf((float)this->_nbr / (1 << this->_bits))));
	
	return (nbr_int);
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

std::ostream &operator<<(std::ostream & o, const Fixed &assign) {

	o << assign.toFloat();
	
	return o;
}
