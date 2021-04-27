/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Killer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:12:29 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 13:00:06 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Killer.hpp"

Killer::Killer(std::string name) : Victim(name) {
	std::cout << "Hmmm......" << std::endl;
}

Killer::Killer(const Killer &obj) : Victim(obj) {
	*this = obj;
}

void	Killer::getPolymorphed(void) const {
	std::cout << _Name << " has been turned into a black dog!" << std::endl;
}

Killer & Killer::operator = (const Killer &obj) {
	_Name = obj._Name;
	return (*this);
}

Killer::~Killer() {
	std::cout << "I'm die....." << std::endl;
}