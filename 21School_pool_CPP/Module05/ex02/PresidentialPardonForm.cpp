/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:41:59 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:11:48 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &name) : Form(name, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj), _target(obj._target) {
}

bool PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat) {
	if (Form::beSigned(bureaucrat)) 
	{
		std::cout << getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
		return true;
	}
	return false;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &) {
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

