/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:38:53 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 12:49:14 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	
private:
	std::string _target;
	RobotomyRequestForm();
	
public:
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm(RobotomyRequestForm const &);
	
	virtual bool beSigned(Bureaucrat &bureaucrat);
	Form 		*clone(std::string &name) const;
	
	RobotomyRequestForm & operator=(RobotomyRequestForm const &obj);
	
	virtual ~RobotomyRequestForm();
};

#endif