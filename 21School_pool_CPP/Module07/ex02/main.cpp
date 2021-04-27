/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:48:05 by resther           #+#    #+#             */
/*   Updated: 2021/02/09 17:30:03 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int		main(void)
{
	Array<int> array_1;
	std::cout << std::endl << std::string(15, ' ') << "Test with INT" << std::endl;
	std::cout << std::endl << std::string(15, ' ') << "1 array is empty" << std::endl << std::endl;
	try
	{
		std::cout << "array size is         : " << array_1.size() << std::endl;
		std::cout << "try to reach 1 element: " << array_1[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << std::string(15, ' ') << "2 array with n size" << std::endl << std::endl;
	try
	{
		Array <int> array_2(2);

		std::cout << "array size is                                : " << array_2.size() << std::endl;
		std::cout << "try to reach 1 element before assign a value : " << array_2[1] << std::endl;
		array_2[1] = 8;
		std::cout << "try to reach 1 element after assign a value  : " << array_2[1] << std::endl;
		std::cout << "try to reach 2 element which not exist       : " << array_2[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << std::endl << std::string(15, ' ') << "Test with STRING" << std::endl;
	Array<std::string> array_3;
	
	std::cout << std::endl << std::string(15, ' ') << "3 array is empty string" << std::endl << std::endl;
	try
	{
		std::cout << "array size is         : " << array_3.size() << std::endl;
		std::cout << "try to reach 1 element: " << array_3[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "4 array is full string" << std::endl << std::endl;
	try
	{
		Array <std::string> array_4(2);

		std::cout << "array size is                                : " << array_4.size() << std::endl;
		std::cout << "try to reach 1 element before assign a value : " << array_4[1] << std::endl;
		array_4[1] = "21school";
		std::cout << "try to reach 1 element after assign a value  : " << array_4[1] << std::endl;
		std::cout << "try to reach 2 element which not exist       : " << array_4[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "Test with FLOAT" << std::endl;
	std::cout << std::endl << std::string(15, ' ') << "5 array is empty float" << std::endl << std::endl;

	Array<float> array_5;
	try
	{
		std::cout << "array size is         : " << array_5.size() << std::endl;
		std::cout << "try to reach 1 element: " << array_5[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "6 array is full float" << std::endl << std::endl;
	Array <float> array_6(2);
	
	try
	{
		std::cout << "array size is                                : " << array_6.size() << std::endl;
		std::cout << "try to reach 1 element before assign a value : " << array_6[1] << std::endl;
		array_6[1] = 15.9;
		std::cout << "try to reach 1 element after assign a value  : " << array_6[1] << std::endl;
		std::cout << "try to reach 2 element which not exist       : " << array_6[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
