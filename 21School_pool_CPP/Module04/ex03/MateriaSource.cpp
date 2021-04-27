/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:20:48 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 10:57:42 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
}


MateriaSource::MateriaSource(MateriaSource const &obj) {
	*this = obj;
}

void	MateriaSource::learnMateria(AMateria *obj) {
	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = obj->clone();
			break ;
		}
	}
}

AMateria *	MateriaSource::createMateria(std::string const &type) {
	AMateria		*newMateria = NULL;

	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			newMateria = _inventory[i]->clone();
			break ;
		}
	}
	return (newMateria);
}

MateriaSource &	MateriaSource::operator=(MateriaSource const &obj) {
	if (this != &obj)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (obj._inventory[i])
				_inventory[i] = obj._inventory[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
		}
	}
}