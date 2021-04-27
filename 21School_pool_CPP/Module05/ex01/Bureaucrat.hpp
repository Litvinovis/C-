/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:50:55 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:42:29 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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

	 class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

	std::string	const &GetName() const;
	int			GetGrade() const;
	void		GradeIncrease();
	void		GradeDecrease();
	void		SignForm(Form &obj);

	Bureaucrat &operator=(const Bureaucrat &obj);

	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif