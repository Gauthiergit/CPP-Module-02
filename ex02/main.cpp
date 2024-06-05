/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:28:51 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/05 09:51:47 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	std::cout << "Subject tests:" << std::endl;
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << "My tests:" << std::endl;
	Fixed c(a + b);
	std::cout << c << std::endl;
	if (c > b)
		std::cout << "c is bigger than b" << std::endl;
	else
		std::cout << "error" << std::endl;
	Fixed d = c - a;
	std::cout << d << std::endl;
	if (d == b)
		std::cout << "d is equal to b" << std::endl;
	else
		std::cout << "error" << std::endl;
	Fixed e(b / Fixed(2));
	std::cout << e << std::endl;
	return (0);
}