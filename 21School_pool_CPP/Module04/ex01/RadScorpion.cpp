/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:18 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &obj) {
	*this = obj;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &obj) {
	if (this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}
