/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:58:17 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 11:40:38 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <algorithm>

int		main(void)
{
	std::cout << std::endl << std::string(15, ' ') << "Test with empty vector:" << std::endl;
	
	std::vector<int> vect;
	try
	{
		std::vector<int>::iterator it = easyfind(vect, 8);
		std::cout << *it << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}
	
	std::cout << std::endl << std::string(15, ' ') << "Test with full vector:" << std::endl;
	try
	{
		for (int i = 1; i < 100; ++i) {
			vect.push_back(i);
		}
		std::reverse(vect.begin(), vect.end());
		std::vector<int>::iterator it = easyfind(vect, 57);
		std::cout << "element " << *it << " is found" << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}
	

	std::cout << std::endl << std::string(15, ' ') << "Test with empty list:" << std::endl;
	std::list<int>	mylist;
	try
	{
		std::list<int>::iterator it = easyfind(mylist, 8);
		std::cout << *it << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}
	
	std::cout << std::endl << std::string(15, ' ') << "Test with full list:" << std::endl;

	std::list<int>	mylist2{ 98, 52, 67, 68, 225, 1091 }; 
	std::list<int>::iterator it;
    it = find(mylist2.begin(), mylist2.end(), 225);
    mylist2.insert(it, 73);
	try
	{
		it = easyfind(mylist2, 68);
		std::cout << "element " << *it << " is found" << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}
	try
	{
		it = easyfind(mylist2, 73);
		std::cout << "element " << *it << " is found" << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}

	std::cout << std::endl << std::string(15, ' ') << "End of tests" << std::endl;
	return (0);
}

