/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:28:00 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 20:28:30 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>

class Fixed {

public:

	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed&	operator=(const Fixed &assign);
	
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_nbr;
	const static int	_nbr_bits = 8;	
};

#endif