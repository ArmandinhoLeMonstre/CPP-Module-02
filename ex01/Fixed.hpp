/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:35:26 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 18:58:34 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <ostream>

class Fixed {
	
public:

	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed(float const n);
	Fixed(int const n);
	Fixed &operator=(const Fixed &assign);
	
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int	_nbr;
	const static int	_bits = 8;
		
};

std::ostream&   operator<<(std::ostream& o, Fixed const &assign);

#endif