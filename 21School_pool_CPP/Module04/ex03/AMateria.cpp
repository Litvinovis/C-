/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:11:31 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:52:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) {
}

AMateria::AMateria(const AMateria &obj) {
	*this = obj;
}

std::string const &	AMateria::getType() const {
	return (_type);
}

unsigned int	AMateria::getXP() const {
	return (_xp);
}

void	AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
}

AMateria &	AMateria::operator=(AMateria const &obj) {
	if (this != &obj)
		_xp = obj._xp;
	return (*this);
}

AMateria::~AMateria() {
}
