/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:04:23 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 11:12:24 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *"<< std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj) {
	*this = obj;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &obj) {
	if (this != &obj) {}
	return (*this);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout <<  "I’ll be back..." << std::endl;
}
