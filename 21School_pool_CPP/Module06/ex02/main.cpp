/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:30:01 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 14:53:27 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void identify_from_reference( Base & p)
{
	std::cout << "Identify by reference: ";
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::bad_cast& e)
			{
				std::cout << "Not appropriate class" << std::endl;
			}
		}
	}
}

void identify_from_pointer(Base * p)
{
	std::cout << "Identify by pointer: ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Not appropriate class" << std::endl;
}

Base * generate(void)
{
	int	i;

	i = rand() % 3;
	if (i == 1)
	{
		std::cout << "A" << std::endl;
		return (new A);
	}
	else if (i == 2)
	{
		std::cout << "B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C" << std::endl;
		return (new C);
	}
}

int		main(void)
{
	srand(time(0));
	std::cout << std::endl << std::string(15, ' ') << "Generate some random class:" << std::endl << std::endl;
	
	std::cout << "test 1 is - ";
	Base *test_1 = generate();
	std::cout << "test 2 is - ";
	Base *test_2 = generate();
	std::cout << "test 3 is - ";
	Base *test_3 = generate();
	
	std::cout << std::endl << std::string(15, ' ') << "Trying to recognize objects:" << std::endl << std::endl;
	
	std::cout << "test 1 ";
	identify_from_pointer(test_1);
	std::cout << "test 1 ";
	identify_from_reference(*test_1);
	std::cout << "test 2 ";
	identify_from_pointer(test_2);
	std::cout << "test 2 ";
	identify_from_reference(*test_2);
	std::cout << "test 3 ";
	identify_from_pointer(test_3);
	std::cout << "test 3 ";
	identify_from_reference(*test_3);

	delete test_1;
	delete test_2;
	delete test_3;
	return (0);
}
