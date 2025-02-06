/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:15:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/06 15:09:24 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <cmath>

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

Fixed::Fixed(const int integer) {
	this->_nbr = integer << this->_bits;
}

Fixed::Fixed(const float floating_number) {
	this->_nbr = roundf(floating_number * (1 << this->_bits));
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int	Fixed::getRawBits(void) const {

	return (this->_nbr);
}

void	Fixed::setRawBits(int raw) {
	
	this->_nbr = raw;

	return ;
}


Fixed	&Fixed::operator=(Fixed const &assign) {

	std::cout << "Operator = called" << std::endl;
	
	if (this != &assign)
		this->_nbr = assign.getRawBits();
	
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Fixed const &assign) {

	o << assign.toFloat();
	
	return (o);
}

bool Fixed::operator==(const Fixed &assign) const {
    
	if (this->_nbr == assign.getRawBits())
		return (true);
	
	return (false);
}

bool Fixed::operator!=(const Fixed &assign) const {
    
	if (this->_nbr == assign.getRawBits())
		return (false);

	return (true);
}

bool Fixed::operator<(const Fixed & assign) const {

	if (this->_nbr < assign.getRawBits())
		return (true);
	
	return (false);
}

bool Fixed::operator>(const Fixed & assign) const {

	if (this->_nbr > assign.getRawBits())
		return (true);
	
	return (false);
}

bool Fixed::operator>=(const Fixed & assign) const {

	if (this->_nbr >= assign.getRawBits())
		return (true);
	
	return (false);
}

bool Fixed::operator<=(const Fixed & assign) const {

	if (this->_nbr <= assign.getRawBits())
		return (true);
	
	return (false);
}

Fixed Fixed::operator+(const Fixed &assign) const {

	int		addition;
	Fixed	res;

	addition = this->_nbr + assign.getRawBits();
	res._nbr = addition;
	
	return (res);
}

Fixed Fixed::operator-(const Fixed &assign) const {

	int		addition;
	Fixed	res;

	addition = this->_nbr - assign.getRawBits();
	res._nbr = addition;
	
	return (res);
}

Fixed Fixed::operator*(const Fixed &assign) const {

	int		addition;
	Fixed	res;

	addition = (this->_nbr * assign.getRawBits()) / (1 << this->_bits);
	res._nbr = addition;
	
	return (res);
}

Fixed Fixed::operator/(const Fixed &assign) const {

	int		addition;
	Fixed	res;
	
	if (assign.getRawBits() != 0)
	{
		addition = (this->_nbr * (1 << this->_bits))/ assign.getRawBits();
		res._nbr = addition;
	}
	
	return (res);
}

Fixed& Fixed::operator++(void) {
    this->_nbr++;
	
    return (*this);
}

Fixed Fixed::operator++(int num) {
    (void)num;
	Fixed opt = (*this);
    this->_nbr++;
	
    return opt;
}

Fixed& Fixed::operator--(void) {
    this->_nbr--;
	
    return (*this);
}

Fixed Fixed::operator--(int num) {
    (void)num;
	Fixed opt = (*this);
    this->_nbr--;
	
    return opt;
}


Fixed&	Fixed::min(const Fixed &assign1, const Fixed &assign2)
{
	if (assign1.getRawBits() < assign2.getRawBits())
		return ((Fixed&)assign1);
	return ((Fixed&)assign2);
}

Fixed&	Fixed::min(Fixed &assign1, Fixed &assign2)
{
	if (assign1.getRawBits() < assign2.getRawBits())
		return (assign1);
	return (assign2);
}

Fixed&	Fixed::max(Fixed &assign1, Fixed &assign2)
{
	if (assign1.getRawBits() > assign2.getRawBits())
		return (assign1);
	return (assign2);
}

Fixed&	Fixed::max(const Fixed &assign1, const Fixed &assign2)
{
	if (assign1.getRawBits() > assign2.getRawBits())
		return ((Fixed&)assign1);
	return ((Fixed&)assign2);
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

