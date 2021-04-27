/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:42:15 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:18:27 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) : Form(name, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form(obj), _target(obj._target) {
}

bool ShrubberyCreationForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.GetGrade() > getSignGrade())
		throw GradeTooLowException();
	if (!IsSign()) {
		std::stringstream filename;
		filename << getName() << "_shrubbery";
		std::ofstream newFile(filename.str().c_str());
		if (newFile.is_open()) {
			Form::beSigned(bureaucrat);
			newFile << "\n\
                       v\n\
                      >X<\n\
                       A\n\
                      d$b\n\
                    .d$$$b.\n\
                  .d$i$$$$$b.\n\
                     d$$$@b\n\
                    d$$$$ib\n\
                  .d$$$$$$$b\n\
                .d$$@$$$$$$$ib.\n\
                    d$$i$$$b\n\
                   d$$$$$@$b\n\
                 .d$@$$$$$$$$@b.\n\
               .d$$$$i$$$$$$$$$$b.\n\
                      ###\n\
                      ###\n\
                      ###\n";
			newFile.close();
			return true;
		} else
			std::cout << "Error:\nCan't create file" << std::endl;
	}
	return false;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
	if (this != &obj)
		_target = obj._target;
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}