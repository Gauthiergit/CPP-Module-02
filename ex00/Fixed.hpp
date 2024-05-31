/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:02:40 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/31 18:11:06 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
	
	int					_RawBits;
	static const int	nb_bits = 8;

	public:

	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed	&operator=(Fixed &change);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};



#endif