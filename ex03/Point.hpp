/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:57:34 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/03 20:57:34 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
	private:
	
	Fixed const x;
	Fixed const y;

	public:
	Point();
	Point(float const f1, float const f2);
	Point(const Point &copy);
	~Point();

	Point	&operator=(const Point &change);
	Fixed const	getX() const;
	Fixed const getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

