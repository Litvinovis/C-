/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:15 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:18 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(const PowerFist &obj) {
	*this = obj;
}
PowerFist &PowerFist::operator=(const PowerFist &obj) {
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

PowerFist::~PowerFist() {
}