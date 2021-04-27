/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:41:20 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:24:56 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void		HumanB::attack() const {
	std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon & weapon) {
	this->_weapon = &weapon;
}