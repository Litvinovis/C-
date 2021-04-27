/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:33:52 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 10:58:57 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
}
Human::~Human() {
}

std::string	Human::identify() const {
	return (this->_brain.identify());
}
const Brain	&Human::getBrain() const {
	return (this->_brain);
}