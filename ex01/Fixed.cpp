/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:51:22 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/03 14:54:46 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int newInt)
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = newInt << nb_bits;
}

Fixed::Fixed(const float newFloat)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(newFloat * (1 << nb_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &change)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(change.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (_RawBits);
}

void Fixed::setRawBits( int const raw )
{
	_RawBits = raw;
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(_RawBits) / (1 << nb_bits));
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_RawBits) / (1 << nb_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fp)
{
	os << fp.toFloat();
	return (os);
}