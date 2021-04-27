/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:52:56 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 17:05:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure &obj) : AMateria("cure") {
	*this = obj;
}

AMateria*	Cure::clone() const {
	return new Cure;
}

void	Cure::use(ICharacter &target) {
	std::cout	<< "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

Cure & Cure::operator=(Cure const &obj) {
	if (this != &obj)
		_xp = obj._xp;
	return (*this);
}

Cure::~Cure() {
}