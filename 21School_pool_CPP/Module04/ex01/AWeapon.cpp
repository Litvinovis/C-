/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:50:59 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:15:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::AWeapon(AWeapon &obj) {
	*this = obj;
}

AWeapon &AWeapon::operator=(AWeapon const &obj) {
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

std::string AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getAPCost() const {
	return _apcost;
}

int AWeapon::getDamage() const {
	return _damage;
}

AWeapon::AWeapon() {
	this->_name = "";
	this->_apcost = 0;
	this->_damage = 0;
}

std::ostream & operator<<(std::ostream& os,AWeapon const& obj) {
	os << obj.getName() << " damage: " << obj.getDamage() << "; AP cost: " << obj.getAPCost() << std::endl;
	return (os);
}

AWeapon::~AWeapon() {
}