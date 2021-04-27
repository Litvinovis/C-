/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:38:53 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 11:40:50 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	std::cout << std::endl << std::string(15, ' ') << "Standard test:" << std::endl;
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);	
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "Test with empty object:" << std::endl;
	try
	{
		Span array_1 = Span(5);

		std::cout << "Shortest span is: "<< array_1.shortestSpan() << std::endl;
		std::cout << "Longest span is:  " << array_1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "Test with one element in array:" << std::endl;
	try
	{
		Span array_1 = Span(5);
		array_1.addNumber(9);
		std::cout << "Shortest span is: "<< array_1.shortestSpan() << std::endl;
		std::cout << "Longest span is:  " << array_1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << std::string(15, ' ') << "100 000 Test:" << std::endl;
	try
	{
		Span array_2 = Span(100000);
		std::vector<int> sample;
	
		for (int i = 1; i <= 100000; i++)
			sample.push_back(i);
		array_2.addNumbers(sample.begin(), sample.end());
		
		std::cout << "Shortest span is: "<< array_2.shortestSpan() << std::endl;
		std::cout << "Longest span is:  " << array_2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "Test overload:" << std::endl;
	try
	{
		Span array_3 = Span(3);
			
		array_3.addNumber(10);
		array_3.addNumber(20);
		array_3.addNumber(30);
		array_3.addNumber(40);
		array_3.addNumber(50);
		array_3.addNumber(60);
		array_3.addNumber(70);
			
		std::cout << "Shortest span is: "<< array_3.shortestSpan() << std::endl;
		std::cout << "Longest span is:  " << array_3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::string(15, ' ') << "End of tests" << std::endl;
	return (0);
}