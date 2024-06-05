/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:28:51 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/05 10:27:29 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	bool result = bsp(Point(0.0f, 0.0f), Point(5.0f, 0.0f), Point(0.0f, 5.0f), Point(2.0f, 3.0f));

	if (result)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	return 0;
}