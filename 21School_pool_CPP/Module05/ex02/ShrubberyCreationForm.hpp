/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:38:12 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:21:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <sstream>
#include <fstream>

class ShrubberyCreationForm : public Form {
	std::string	_target;
	ShrubberyCreationForm();
	
public:
	ShrubberyCreationForm(const std::string &name);
	ShrubberyCreationForm(ShrubberyCreationForm const &obj);
	
	virtual bool beSigned(Bureaucrat &bureaucrat);

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &obj);
	
	virtual ~ShrubberyCreationForm();
};

#endif