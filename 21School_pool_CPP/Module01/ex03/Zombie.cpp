/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:55:10 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:23:39 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

std::string const names[13] = {"Dima", "Victor", "Egor", "Igor", "Denis", "Tamara", "Adel", "Ivan", "Danil", "Alina", "Masha", "Sasha", "Ruslan"};

std::string const types[13] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike"};

Zombie::Zombie(void) {
	int n;
	int t;

	n = rand() % 13;
	t = rand() % 13;
	zname = names[n];
	ztype = types[t];
	std::cout << "Zombie " << zname << " is appear!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << zname << " is die!" << std::endl;
}

void		Zombie::announce() {
	std::cout << "<" << zname << " (" << ztype << ")> Brainssssssss..." << std::endl;
}