/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:35:25 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:51:28 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"
#include <string.h>

class Bureaucrat;

class Form {
private:
	const std::string	_Name;
	bool 				_Sign;
	const int			_GradeToSign;
	const int			_GradeToExec;

	Form();
	
public:
	Form(const std::string &name, const int signGrade, const int executeGrade);
	Form(const Form &obj);
	
	class GradeTooHighException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	class FormUnsigned : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	
	const std::string &getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	virtual bool beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const;
	virtual bool IsSign() const;
	virtual Form *clone(std::string &name) const = 0;
	
	Form &operator=(const Form &obj);
	
	virtual ~Form();
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif