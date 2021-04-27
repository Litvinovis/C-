/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Witness.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:09:26 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 13:02:51 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Witness.hpp"

Witness::Witness(std::string name) : Victim(name) {
	std::cout << "i see you." << std::endl;
}

Witness::Witness(const Witness &obj) : Victim(obj) {
	*this = obj;
}

void	Witness::getPolymorphed(void) const
{
	std::cout << _Name << " has been turned into a three!" << std::endl;
}

Witness & Witness::operator = (const Witness &obj) {
	_Name = obj._Name;
	return (*this);
}

Witness::~Witness() {
	std::cout << "***silence***" << std::endl;
}