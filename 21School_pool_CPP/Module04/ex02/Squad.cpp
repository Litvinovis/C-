/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:12:32 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 10:57:42 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() {
	_Num = 0;
	_Units = NULL;
}

Squad::Squad(const Squad &obj) {
	*this = obj;
}

int	Squad::getCount() const {
	return (_Num);
}

ISpaceMarine *	Squad::getUnit(int n) const {
	if (n < 0 || n >= _Num)
		return (NULL);
	t_squad		*temp = _Units;
	for (; n; --n)
		temp = temp->next;
	return (temp->unit);
}

int		Squad::push(ISpaceMarine *obj) {
	if (!obj)
		return (_Num);
	if (!_Num)
	{
		_Units = new t_squad;
		_Units->unit = obj;
		_Units->next = NULL;
	}
	else
	{
		t_squad		*temp = _Units;
		for (int i = 0; i < _Num; ++i)
		{
			if (obj == temp->unit)
				return (_Num);
			if (temp->next)
				temp = temp->next;
		}
		temp->next = new t_squad;
		temp = temp->next;
		temp->unit = obj;
		temp->next = NULL;
	}
	return (++_Num);
}

Squad &	Squad::operator=(const Squad &obj) {
	if (this != &obj)
	{
		if (_Units)
			deleteUnits();
		for (int i = 0; i < obj._Num; ++i)
		{
			push(obj.getUnit(i)->clone());
		}
	}
	return (*this);
}

void	Squad::deleteUnits() {
	t_squad		*tmp = NULL;

	for (int i = 0; i < _Num; ++i)
	{
		tmp = _Units->next;
		delete (_Units->unit);
		delete (_Units);
		_Units = tmp;
	}
	_Units = NULL;
}

Squad::~Squad() {
	deleteUnits();
}