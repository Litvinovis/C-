/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:55:54 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:17:12 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int intern_standard_test(void) {
	std::cout << std::endl << std::string(15, ' ') << "Intern subject test" << std::endl << std::endl;
	
	Intern someRandomIntern;
	Form *rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	delete rrf;
	return (0);
}

int	intern_additional_test(void) {
	std::cout << std::endl << std::string(15, ' ') << "Intern additional test" << std::endl << std::endl;
	
	Intern junior;
	Bureaucrat Trump(1, "President");
	Form *one, *two, *three;

	one = junior.makeForm("robotomy tseuqer", "R2D2");
	two = junior.makeForm("shrubbery", "R2D2");
	three = junior.makeForm("presidential pard", "R2D2");
	
	std::cout << std::endl;

	one = junior.makeForm("robotomy request", "R2D2");
	two = junior.makeForm("shrubbery creation", "Tree");
	three = junior.makeForm("presidential pardon", "Constitution");

	std::cout << std::endl;
	
	std::cout << *one << std::endl;
	std::cout << *two << std::endl;
	std::cout << *three << std::endl;
	
	std::cout << std::endl;

	Trump.SignForm(*one);
	Trump.SignForm(*two);
	Trump.SignForm(*three);
	
	std::cout << std::endl;

	std::cout << *one << std::endl;
	std::cout << *two << std::endl;
	std::cout << *three << std::endl;
	
	std::cout << std::endl;

	delete one;
	delete two;
	delete three;
	return (0);
}

int	main(void) {
	std::srand(time(0));
	intern_standard_test();
	std::cout << std::endl;
	intern_additional_test();
	std::cout << std::string(15, ' ') << "End of tests" << std::endl << std::endl;
	return (0);
}