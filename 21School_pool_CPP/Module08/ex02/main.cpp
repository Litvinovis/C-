/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:43:54 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 12:15:08 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int			main(void)
{
	std::cout << std::endl << std::string(15, ' ') << "Standard test:" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
		
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << std::endl << std::string(15, ' ') << "Additional test:" << std::endl << std::endl;

	MutantStack<std::string> stack_1;

	stack_1.push("Genom");
	stack_1.push("Progress");
	stack_1.push("Vault");
	stack_1.push("Universe");
	stack_1.push("21school");

	for (MutantStack<std::string>::iterator it = stack_1.begin(); it != stack_1.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl << std::string(15, ' ') << "End of tests" << std::endl;
	
	MutantStack<float> stack_2;

	stack_2.push(17.3);
	stack_2.push(10.5);
	stack_2.push(14.2);
	stack_2.push(8.9);
	stack_2.push(9.8);

	for (MutantStack<float>::iterator it = stack_2.begin(); it != stack_2.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl << std::string(15, ' ') << "End of tests" << std::endl;
	return (0);
}