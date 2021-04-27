/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:33:58 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:06:00 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &obj) : Victim(obj) {
	*this = obj;
}

void	Peon::getPolymorphed(void) const {
	std::cout << _Name << " has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator = (const Peon &obj) {
	_Name = obj._Name;
	return (*this);
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}