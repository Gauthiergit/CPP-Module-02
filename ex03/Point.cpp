/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:43:34 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/03 21:43:34 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::Point(float const f1, float const f2) : x(f1), y(f2) {}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point::~Point() {}

Point& Point::operator=(const Point &change)
{
	(Fixed)x = change.x;
	(Fixed)y = change.y;
	return (*this);
}

Fixed const Point::getX() const
{
	return (x);
}

Fixed const Point::getY() const
{
	return (y);
}