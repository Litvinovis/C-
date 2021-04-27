/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:54:58 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:34:17 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _Name(name) {
	if (grade > MinGrade)
		throw Bureaucrat::GradeTooLowException();
	if (grade < MaxGrade)
		throw Bureaucrat::GradeTooHighException();
	_Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
    *this = obj;
}

std::string const &Bureaucrat::GetName() const {
    return (this->_Name);
}

int Bureaucrat::GetGrade() const {
	return _Grade;
}

void Bureaucrat::GradeIncrease() {
	if (_Grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_Grade--;
}

void Bureaucrat::GradeDecrease() {
	if (_Grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_Grade++;
}

char const *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade higher than 1";
}
char const *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade lower than 150";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->_Grade = obj._Grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {
	out << obj.GetName() << " has grade = " << (obj.GetGrade()) << std::endl;
	return out;
}

Bureaucrat::~Bureaucrat() {
}
