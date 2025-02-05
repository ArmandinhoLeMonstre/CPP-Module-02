/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:15:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 21:27:16 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
	
	return ;
}

Fixed::Fixed(Fixed const &copy) {

	std::cout << "Copy constructor called" << std::endl;
	this->_nbr = copy.getRawBits();

	return ;
}

Fixed	&Fixed::operator=(Fixed const &assignement) {

	std::cout << "Operator = called" << std::endl;
	
	if (this != &assignement)
		this->_nbr = assignement.getRawBits();
	
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Fixed const &assign) {

	o << assign.getRawBits();
	
	return (o);
}

bool Fixed::operator==(const Fixed &other) const {
    
	if (this->_nbr == other.getRawBits())
		return (true);
	
	return (false);
}

bool Fixed::operator!=(const Fixed &other) const {
    
	if (this->_nbr == other.getRawBits())
		return (false);

	return (true);
}

bool Fixed::operator<(const Fixed & other) const {

	if (this->_nbr < other.getRawBits())
		return (true);
	
	return (false);
}

bool Fixed::operator>(const Fixed & other) const {

	if (this->_nbr > other.getRawBits())
		return (true);
	
	return (false);
}

int	Fixed::getRawBits(void) const {

	return (this->_nbr);
}

void	Fixed::setRawBits(int raw) {
	
	this->_nbr = raw;

	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}