/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:32:15 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 18:55:12 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : zname(name) , ztype(type) {
	std::cout << "Zombie " << zname << " is appear!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << zname << " is die!" << std::endl;
}

void		Zombie::announce() {
	std::cout << "<" << zname << " (" << ztype << ")> Brainssssssss..." << std::endl;
}