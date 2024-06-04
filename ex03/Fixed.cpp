/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:51:22 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/04 15:38:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructeurs :
Fixed::Fixed() : _RawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int newInt)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_RawBits = newInt << nb_bits;
}

Fixed::Fixed(const float newFloat)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(newFloat * (1 << nb_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
// -----------------------------------------------------------------------

// Destructeur:
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}
// -----------------------------------------------------------------------

// Fonction membre de surcharge d'operateur arithmetique
Fixed& 	Fixed::operator=(const Fixed &change)
{
	this->setRawBits(change.getRawBits());
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &change) const
{
	return (Fixed(this->toFloat() + change.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &change) const 
{
	return (Fixed(this->toFloat() - change.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &change) const
{
	return (Fixed(this->toFloat() * change.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &change) const
{
	return (Fixed(this->toFloat() / change.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	this->_RawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++(*this);
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	this->_RawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--(*this);
	return (temp);
}
// -----------------------------------------------------------------------

// Fonction membre de surcharge d'operateur de comparaison
bool Fixed::operator<(const Fixed	&comp)
{
	return (this->getRawBits() < comp._RawBits);
}

bool Fixed::operator>(const Fixed	&comp)
{
	return (this->getRawBits() > comp._RawBits);
}

bool Fixed::operator<=(const Fixed	&comp)
{
	return (this->getRawBits() <= comp._RawBits);
}

bool Fixed::operator>=(const Fixed	&comp)
{
	return (this->getRawBits() >= comp._RawBits);
}

bool Fixed::operator==(const Fixed	&comp)
{
	return (this->getRawBits() == comp._RawBits);
}

bool Fixed::operator!=(const Fixed	&comp)
{
	return (this->getRawBits() != comp._RawBits);
}
// -----------------------------------------------------------------------

// Autres fonctions membres
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
// -----------------------------------------------------------------------

// Fonctions non membres
std::ostream& operator<<(std::ostream& os, const Fixed& fp)
{
	os << fp.toFloat();
	return (os);
}