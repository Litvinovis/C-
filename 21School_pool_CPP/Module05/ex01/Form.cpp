/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:35:22 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 18:27:32 by resther          ###   ########.fr       */
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

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade too high exception!");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade too low exception!");
}

std::string const &Form::GetName() const {
    return (this->_Name);
}

bool	Form::IsSign() const {
    return (this->_Sign);
}

int		Form::GetGradeToSign() const {
    return (this->_GradeToSign);
}

int		Form::GetGradeToExec() const {
    return (this->_GradeToExec);
}

void	Form::beSigned(Bureaucrat const &obj) {
    if (obj.GetGrade() > this->_GradeToSign)
		throw Form::GradeTooLowException();
    this->_Sign = true;
}

Form & Form::operator=(const Form &obj) {
    this->_Sign = obj._Sign;
    return (*this);
}

std::ostream & operator<<(std::ostream &out, Form const &obj) {
    out << "Name: " << obj.GetName() << ", Signed: " << obj.IsSign() << ", GradeSign: " << obj.GetGradeToSign() << ", GradeExecute: " << obj.GetGradeToExec() << std::endl;
    return (out);
}

Form::~Form() {
}
