/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:39:13 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:49:24 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : Form(name, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form(obj), _target(obj._target) {
}

bool RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.GetGrade() > getSignGrade())
		throw GradeTooLowException();
	else if (!IsSign())
	{
		if (std::rand() % 2 == 1)
		{
			std::cout << getName() << "  has been robotomized successfully" << std::endl;
			Form::beSigned(bureaucrat);
			return true;
		} else
			std::cout << getName() << " wasn't robotomized :(" << std::endl;
	}
	return false;
}

Form *RobotomyRequestForm::clone(std::string &name) const {
	return new RobotomyRequestForm(name);
}

RobotomyRequestForm &  RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	if (this != &obj)
		_target = obj._target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}
