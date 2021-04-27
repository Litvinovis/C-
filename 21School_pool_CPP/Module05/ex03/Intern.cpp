/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:22:45 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:58:50 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	this->types[0] = "robotomy request";
	this->types[1] = "shrubbery creation";
	this->types[2] = "presidential pardon";
	this->forms[0] = new RobotomyRequestForm("test");
	this->forms[1] = new ShrubberyCreationForm("test");
	this->forms[2] = new PresidentialPardonForm("test");
}

Intern::Intern(const Intern &intern) {
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern) {
	(void) intern;
	return *this;
}

Form *Intern::makeForm(std::string type, std::string name) {
	for (int i = 0; i < FORMS_NUM; i++)
		if (type == types[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return forms[i]->clone(name);
		}
	std::cout << "Error: form " << type << " not exist" << std::endl;
	return NULL;
}

Intern::~Intern() {
	for (int i = 0; i < FORMS_NUM; i++)
		delete forms[i];
}
