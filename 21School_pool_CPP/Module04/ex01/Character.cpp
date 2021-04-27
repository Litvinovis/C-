/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:02 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 10:54:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_name = "";
}

Character::Character(const std::string &name) {
	_name = name;
	_ap = 40;
	_maxAp = 40;
	_weapon = 0;
}

Character::Character(const Character &obj) {
	*this = obj;
}

const std::string &Character::getName() const {
	return _name;
}

AWeapon *Character::getWeapon() const {
	return _weapon;
}

void Character::recoverAP() {
	if (this->_ap + 10 > _maxAp)
		this->_ap = _maxAp;
	else
		this->_ap += 10;
}

unsigned int Character::getAp() const {
	return _ap;
}

void	Character::attack(Enemy *enemy)
{
	if (!_weapon)
		return ;
	if (_ap >= static_cast<unsigned>(_weapon->getAPCost()))
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_ap -= _weapon->getAPCost();
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
	}
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

Character &Character::operator=(const Character &obj) {
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_weapon = obj._weapon;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & out, Character & src)
{
	if (src.getWeapon())
		out << src.getName() << " has " << src.getAp() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		out << src.getName() << " has " << src.getAp() << " AP and is unarmed" << std::endl;
	return out;
}

Character::~Character() {
}