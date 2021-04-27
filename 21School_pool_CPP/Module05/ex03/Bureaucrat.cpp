/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:54:58 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 10:05:08 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) {
	_Name = name;
	if (grade > MinGrade)
		throw Bureaucrat::GradeTooLowException();
	if (grade < MaxGrade)
		throw Bureaucrat::GradeTooHighException();
	_Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    this->_Name = obj._Name;
    this->_Grade = obj._Grade;
}

const std::string &Bureaucrat::GetName() const {
	return _Name;
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
	return "Grade higher than 1\n";
}
char const *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade lower than 150\n";
}

void Bureaucrat::SignForm(Form &obj) {
	if (obj.IsSign())
	{
		std::cout << GetName() << " cannot sign " << obj.getName() << " because form is already signed!" << std::endl;
		return;
	}
	try {
		obj.beSigned(*this);
	} catch (std::exception &e) {
		std::cout << GetName() << " cannot sign " << obj.getName() << " because " << e.what() << std::endl;
	}
	if (obj.IsSign())
		std::cout << GetName() << " sings " << obj.getName() << std::endl;
}


void Bureaucrat::ExecuteForm(const Form &obj) {
	try {
		obj.execute(*this);
		std::cout << GetName() << " executes " << obj.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << GetName() << " cannot execute " << obj.getName() << " because: " << e.what() << std::endl;
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->_Grade = obj._Grade;
	this->_Name = obj._Name;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {
	out << obj.GetName() << ", bureaucrat grade " << std::to_string(obj.GetGrade()) << std::endl;
	return out;
}

Bureaucrat::~Bureaucrat() {
}