/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Revolver.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:32:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:43 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Revolver.hpp"

void Revolver::attack() const {
	std::cout << "* tydishch tydishch tydishch *" << std::endl;
}

Revolver::Revolver(): AWeapon("Revolver", 20, 35) {
}

Revolver::Revolver(const Revolver &obj) {
	*this = obj;
}

Revolver &Revolver::operator=(const Revolver &obj) {
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

Revolver::~Revolver() {
}