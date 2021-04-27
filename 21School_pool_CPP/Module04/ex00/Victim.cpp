/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:37:13 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 19:04:28 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) {
	_Name = name;
	std::cout << "Some random victim called " << _Name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &obj) {
	*this = obj;
}

std::string	Victim::getName(void) const {
	return (_Name);
}

void	Victim::getPolymorphed(void) const {
	std::cout << _Name << " has been turned into a cute little sheep!" << std::endl;
}

Victim & Victim::operator=(const Victim &obj) {
	if (this != &obj)
		_Name = obj._Name;
	return (*this);
}

std::ostream & operator<<(std::ostream &out, const Victim &obj) {
	out << "I am " << obj.getName() << " and I like otters!" << std::endl;
	return (out);
}

Victim::~Victim() {
	std::cout << "Victim " << _Name << " just died for no apparent reason!" << std::endl;
}