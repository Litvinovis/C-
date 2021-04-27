/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:22:42 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:57:55 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern {
private:
	static const int FORMS_NUM = 3;
	Form *forms[FORMS_NUM];
	std::string types[FORMS_NUM];

public:
	Intern();
	Intern(const Intern &intern);
	
	Form *makeForm(std::string type, std::string name);
	
	Intern &operator=(const Intern &intern);

	virtual ~Intern();
};

#endif