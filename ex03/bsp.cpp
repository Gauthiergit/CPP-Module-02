/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:44:16 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/03 21:44:16 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed lineAB((b.getY() - a.getY()) * point.getX() - (b.getX() - a.getX()) * point.getY()
		+ (b.getX() * a.getY() - b.getY() * a.getX()));
	
	Fixed lineBC((c.getY() - b.getY()) * point.getX() - (c.getX() - b.getX()) * point.getY()
		+ (c.getX() * b.getY() - c.getY() * b.getX()));

	Fixed lineCA((a.getY() - c.getY()) * point.getX() - (a.getX() - c.getX()) * point.getY()
		+ (a.getX() * c.getY() - a.getY() * c.getX()));

	std::cout << lineAB << std::endl;
	std::cout << lineBC << std::endl;
	std::cout << lineCA << std::endl;

	if (lineCA.getRawBits() > 0 && lineBC.getRawBits() > 0 && lineCA.getRawBits() > 0)
		return (true);
	else if (lineCA.getRawBits() < 0 && lineBC.getRawBits() < 0 && lineCA.getRawBits() < 0)
		return (true);
	return (false);
}