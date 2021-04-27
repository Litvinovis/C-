/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:52:40 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:53:53 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &a) : AMateria("ice") {
	*this = a;
}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout	<< "* shoots an ice bolt " << target.getName() << " *" << std::endl;
}

Ice	&	Ice::operator=(Ice const &obj) {
	if (this != &obj)
		_xp = obj._xp;
	return (*this);
}

Ice::~Ice() {
}