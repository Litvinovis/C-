/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:12 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:07 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj) {
	*this = obj;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &obj) {
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle() {
}