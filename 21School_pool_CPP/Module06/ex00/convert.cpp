/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 22:51:04 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:47:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	ConversionPrint(char c, int i, float f, double d) {
	if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl << "float: " << f << "f" << std::endl << "double: " << d << std::endl;
}

void	CharPrint(char c, bool imp) {
	if (imp)
		std::cout << "char: impossible" << std::endl;
	else if(!std::isprint(c))
		std::cout <<  "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

void	IntPrint(int i, bool imp) {
	if (imp)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	All_Impossible() {
	std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: impossible" << std::endl << "double: impossible" << std::endl;
}

bool	NaN_check(double number) {
	return (number != number);
}

bool	Inf_check(double number) {
	return (std::numeric_limits<double>::infinity() == number);
}

void	Double_cast(double const number) {
	bool 	InfNaN;

	InfNaN = Inf_check(number) || NaN_check(number);
	CharPrint(static_cast<char>(number), InfNaN || number < CHAR_MIN || number > CHAR_MAX);
	IntPrint(static_cast<int>(number), InfNaN || number < INT_MIN || number > INT_MAX);
	std::cout << "float: " << number << "f" << std::endl;
	std::cout << "double: " << number << std::endl;
}

void	Char_cast(char c) {
	CharPrint(c, false);
	IntPrint(static_cast<int>(c), false);
	std::cout << "float: " << +c << "f" << std::endl;
	std::cout << "double: " << +c << std::endl;
}
