/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:35:25 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 18:28:31 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {
private:
	const std::string	_Name;
	bool 				_Sign;
	const int			_GradeToSign;
	const int			_GradeToExec;

	Form();

public:
	Form(std::string const &name, int GradeToSign, int GradeToExec);
	Form(const Form &form);

	class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

	std::string const   &GetName() const;
    bool                IsSign() const;
    int                 GetGradeToSign() const;
    int                 GetGradeToExec() const;
    void                beSigned(Bureaucrat const &obj);

	Form &operator=(const Form &form);

    ~Form();
};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif