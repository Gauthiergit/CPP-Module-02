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


Fixed fct(Point const &f, Point const &s, Point const &p)
{
	Fixed first((s.getY() - f.getY()) * p.getX());
	Fixed second((s.getX() - f.getX()) * p.getY());
	Fixed third(s.getX() * f.getY() - s.getY() * f.getX());
	Fixed result(first - second + third);
	return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed lineAB = fct(a, b, point);
	Fixed lineBC = fct(b, c, point);
	Fixed lineCA = fct(c, a, point);

	std::cout << "lineAB: " << lineAB << std::endl;
	std::cout << "lineBC: " << lineBC << std::endl;
	std::cout << "lineCA: " << lineCA << std::endl;

	if (lineCA > 0 && lineBC > 0 && lineCA > 0)
		return (true);
	else if (lineCA < 0 && lineBC < 0 && lineCA < 0)
		return (true);
	return (false);
}