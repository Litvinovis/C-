/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:41:47 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:16:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	std::string _target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
	
	virtual bool beSigned(Bureaucrat &bureaucrat);
	
	PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);
	
	virtual ~PresidentialPardonForm();
};


#endif