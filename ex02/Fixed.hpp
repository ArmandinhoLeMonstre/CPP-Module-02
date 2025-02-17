/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:15:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/17 15:37:46 by armitite         ###   ########.fr       */
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
	Fixed(float const n);
	Fixed(int const n);
	~Fixed(void);
	
	Fixed	&operator=(Fixed const &assig);

	bool	operator<(const Fixed &assign) const;
	bool	operator>(const Fixed &assign) const;
	bool	operator >= (const Fixed &assign) const;
	bool	operator <= (const Fixed &assign) const;
	bool	operator==(const Fixed &assign) const;
	bool	operator!=(const Fixed &assign) const;

	Fixed	operator+(const Fixed &assign) const;
	Fixed	operator-(const Fixed &assign) const;
    Fixed	operator*(const Fixed &assign) const;
    Fixed	operator/(const Fixed &assign) const;

	Fixed	&operator ++ (void);
	Fixed	operator ++ (int num);
	Fixed	&operator -- (void);
	Fixed	operator -- (int num);

	static Fixed& min(Fixed &assign1, Fixed &assign2);
	static Fixed& min(const Fixed &assign1, const Fixed &assign2);
	static Fixed& max(Fixed &assign1, Fixed &assign2);
	static Fixed& max(const Fixed &assign1, const Fixed &assign2);
	
	int		getRawBits(void) const;
	void	setRawBits(int raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
private:
	
	int _nbr;
	int	static const _bits = 8;
};

std::ostream&   operator<<(std::ostream& o, Fixed const &assign);

#endif