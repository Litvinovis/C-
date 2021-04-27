/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AngryCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:36:33 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:15:26 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AngryCat.hpp"

AngryCat::AngryCat(): Enemy(3, "AngryCat") {
	std::cout << "* rmyaaaaaaaaaauuu *" << std::endl;
}

AngryCat::AngryCat(const AngryCat &obj) {
	*this = obj;
}

AngryCat &AngryCat::operator=(const AngryCat &obj) {
	if (this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

AngryCat::~AngryCat() {
	std::cout << "* miu miu miu *" << std::endl;
}