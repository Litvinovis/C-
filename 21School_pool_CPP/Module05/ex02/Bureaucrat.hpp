/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:50:55 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:52:41 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	int _Grade;
	std::string const _Name;
	static const int MaxGrade = 1;
	static const int MinGrade = 150;

	Bureaucrat();
	
public:
	Bureaucrat(int grade, std::string name);
	Bureaucrat(const Bureaucrat &obj);
	
	class GradeTooHighException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	
	const std::string	&GetName() const;
	int 				GetGrade() const;
	void 				GradeIncrease();
	void 				GradeDecrease();
	void 				SignForm(Form &form);
	void 				ExecuteForm(Form const &form);

	Bureaucrat &operator=(const Bureaucrat &obj);
	
	virtual ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif