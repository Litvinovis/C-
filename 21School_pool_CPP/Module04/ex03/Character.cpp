/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:33:16 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 10:57:42 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < MaxInventary; ++i)
		_inventory[i] = NULL;
}

Character::Character(Character const &obj) {
	*this = obj;
}

std::string const &	Character::getName() const {
	return (_name);
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < MaxInventary)
	{
		if (_inventory[idx])
			_inventory[idx]->use(target);
	}
}

void	Character::equip(AMateria *obj) {
	if (obj)
	{
		for (int i = 0; i < MaxInventary; ++i)
		{
			if (!_inventory[i])
			{
				_inventory[i] = obj;
				break;
			}
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < MaxInventary)
		_inventory[idx] = NULL;
}

Character &	Character::operator=(Character const &obj) {
	if (this == &obj)
		return *this;
	this->_name = obj.getName();
	for (int i = 0; i < MaxInventary; i++)
		delete _inventory[i];
	for (int i = 0; i < MaxInventary; i++)
		_inventory[i] = obj._inventory[i]->clone();
	return *this;
}

Character::~Character() {
}