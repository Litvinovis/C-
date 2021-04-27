/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Air.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:27:47 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:51:45 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Air.hpp"

Air::Air() : AMateria("air") {
}

Air::Air(const Air &obj) : AMateria("air") {
	*this = obj;
}

AMateria*	Air::clone() const {
	return new Air;
}

void	Air::use(ICharacter &target) {
	std::cout	<< "* creating a wind for " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Air	&	Air::operator=(Air const &obj) {
	if (this != &obj)
		_xp = obj._xp;
	return (*this);
}


Air::~Air() {
}