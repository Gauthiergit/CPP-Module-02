/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:02:40 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/03 10:55:38 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	
	int					_RawBits;
	static const int	nb_bits = 8;

	public:

	Fixed();
	Fixed(const int newInt);
	Fixed(const float newFloat);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed	&operator=(Fixed &change);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fp);

#endif