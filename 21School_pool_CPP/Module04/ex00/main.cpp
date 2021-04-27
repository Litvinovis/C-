/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:29:58 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:10:15 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Witness.hpp"
#include "Killer.hpp"

int	maintest()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}

int main(void) {
	std::cout << std::endl;
	std::cout << std::string(15, ' ') << "Standard test" << std::endl;
	std::cout << std::endl;
	maintest();
	std::cout << std::endl;

	std::cout << std::string(15, ' ') << "Additional test" << std::endl;
	std::cout << std::endl;

	Sorcerer Sorcerer("Wolf", "the awful");

	Peon	one("Nuf-Nuf");
	Witness	two("Nif-Nif");
	Killer	three("Naf-Naf");

	std::cout << std::endl;

	std::cout << Sorcerer << one << two << three;

	std::cout << std::endl;

	Sorcerer.polymorph(one);
	Sorcerer.polymorph(two);
	Sorcerer.polymorph(three);

	return (0);
}
