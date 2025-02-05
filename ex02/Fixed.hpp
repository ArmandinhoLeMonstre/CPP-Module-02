/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:15:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 21:39:13 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <ostream>

class Fixed {

public:
	
	Fixed(void);
	Fixed(Fixed const &copy);
	~Fixed(void);

	Fixed	&operator=(Fixed const &assignement);
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>(const Fixed &other) const;

	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
	
	int		getRawBits(void) const;
	void	setRawBits(int raw);

private:
	
	int _nbr;
};

std::ostream&   operator<<(std::ostream& o, Fixed const &assign);

#endif