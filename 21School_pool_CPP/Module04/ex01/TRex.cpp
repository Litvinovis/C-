/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TRex.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:36:36 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:41:06 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TRex.hpp"

TRex::TRex(): Enemy(100, "TRex") {
	std::cout << "* ROOOOOOOOAAAARRRR *" << std::endl;
}

TRex::TRex(const TRex &obj) {
	*this = obj;
}

TRex &TRex::operator=(const TRex &obj) {
	if (this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

TRex::~TRex() {
	std::cout << "* rrr.... *" << std::endl;
}
