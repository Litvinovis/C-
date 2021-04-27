/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gas.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:26:56 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 17:59:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Gas.hpp"

Gas::Gas() : AMateria("gas") {
}

Gas::Gas(const Gas &obj) : AMateria("gas") {
	*this = obj;
}

Gas	&	Gas::operator=(Gas const &obj) {
	if (this != &obj)
		_xp = obj._xp;
	return (*this);
}

AMateria*	Gas::clone() const {
	return (new Gas(*this));
}

void	Gas::use(ICharacter &target) {
	AMateria::use(target);
	std::cout	<< "* creating poison gas at " << target.getName() << " *" << std::endl;
}

Gas::~Gas() {
}