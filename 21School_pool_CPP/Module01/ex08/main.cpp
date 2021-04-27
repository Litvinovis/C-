/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 23:44:52 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 12:31:43 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main(void)
{
	Human fighter;

	try
	{
		fighter.action("meleeAttack", "security guard");
		fighter.action("rangedAttack", "bodyguard");
		fighter.action("intimidatingShout", "mafia boss");
	}
	catch(char const *str)
	{
		std::cerr << str << std::endl;
	}
	return (0);
}