/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 23:35:16 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:45:17 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		main(int argc, char **argv)
{
	std::string 	line(argv[1]);
	double 			number;

	if (argc != 2)
		return (1);
	std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
	try
	{
		number = std::stod(line);
		Double_cast(number);
	} 
	catch (std::invalid_argument) 
	{
		if (line.length() == 1)
			Char_cast(static_cast<char>(line[0]));
		else
			All_Impossible();
	} 
	catch (std::exception &e) 
	{
		All_Impossible();
	}
	return (0);
}
