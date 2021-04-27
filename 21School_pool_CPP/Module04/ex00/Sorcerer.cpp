/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:47:13 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:05:21 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
	_Name = name;
	_Title = title;
	std::cout << _Name << ", " << _Title << ",is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj) {
	*this = obj;
}

void		Sorcerer::polymorph(Victim const &obj) const {
	obj.getPolymorphed();
}

std::string	Sorcerer::getTitle(void) const {
	return (_Title);
}

std::string	Sorcerer::getName(void) const {
	return (_Name);
}

Sorcerer & Sorcerer::operator=(const Sorcerer &obj) {
	_Name = obj._Name;
	_Title = obj._Title;
	return (*this);
}

std::ostream & operator<<(std::ostream &out, const Sorcerer &obj) {
	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}

Sorcerer::~Sorcerer() {
	std::cout << _Name << ", " << _Title << ", is dead. Consequences will never be the same!" << std::endl;
}
