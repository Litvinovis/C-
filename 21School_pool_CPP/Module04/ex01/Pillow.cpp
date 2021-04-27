/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pillow.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:32:20 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:39:56 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pillow.hpp"

void Pillow::attack() const {
	std::cout << "* bums bums bums *" << std::endl;
}

Pillow::Pillow(): AWeapon("Pillow", 1, 1) {
}

Pillow::Pillow(const Pillow &obj) {
	*this = obj;
}

Pillow &Pillow::operator=(const Pillow &obj) {
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

Pillow::~Pillow() {
}