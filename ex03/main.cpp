/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:28:51 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/04 16:57:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point A(0.00f, 0.00f);
	Point B(5.00f, 0.00f);
	Point C(0.00f, 5.00f);  
	Point P(2.00f, 3.00f);

	bool result = bsp(A, B, C, P);

	if (result)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	return 0;
}