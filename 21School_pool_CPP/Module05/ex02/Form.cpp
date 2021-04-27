/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:35:22 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 10:14:46 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form(std::string const &name, int GradeToSign, int GradeToExec) :
    _Name(name),
    _Sign(false),
    _GradeToSign(GradeToSign),
    _GradeToExec(GradeToExec) {
    if (GradeToSign < 1 || GradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (GradeToSign > 150 || GradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &obj) :
    _Name(obj._Name),
    _Sign(false),
    _GradeToSign(obj._GradeToSign),
    _GradeToExec(obj._GradeToExec) {
}

char const *Form::GradeTooLowException::what() const throw() {
	return "Form: grade too low!";
}

char const *Form::GradeTooHighException::what() const throw() {
	return "Form: grade too high!";
}

char const *Form::FormUnsigned::what() const throw() {
	return "Form : is not signed!";
}

const std::string &Form::getName() const {
	return _Name;
}
bool Form::IsSign() const {
	return _Sign;
}
int Form::getSignGrade() const {
	return _GradeToSign;
}
int Form::getExecuteGrade() const {
	return _GradeToExec;
}

bool Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.GetGrade() > _GradeToSign)
		throw GradeTooLowException();
	else if (!IsSign())
		return (_Sign = true);
	return false;
}

void Form::execute(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.GetGrade() > _GradeToExec)
		throw GradeTooLowException();
	if (!IsSign())
		throw FormUnsigned();
}

Form &Form::operator=(const Form &obj) {
	this->_Sign = obj._Sign;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	if (form.IsSign())
		out << "Signed form " << form.getName() << ", sign grade " << std::to_string(form.getSignGrade()) << ", execute grade " << std::to_string(form.getExecuteGrade()) << std::endl;
	else
		out << "Unsigned form " << form.getName() << ", sign grade " << std::to_string(form.getSignGrade()) << ", execute grade " << std::to_string(form.getExecuteGrade()) << std::endl;
	return out;
}

Form::~Form() {
}
