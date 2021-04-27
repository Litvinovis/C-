/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:55:54 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:53:28 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int Beru_And_Form_Test() {
	std::cout << std::endl << std::string(15, ' ') << "Bureaucrat creation test" << std::endl << std::endl;
	try {
		Bureaucrat ber(151, "Jora");
	} 
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat ber(0, "Jora");
	} 
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat ber(42, "Jora");
	std::cout << ber << std::endl;

	std::cout << std::endl << std::string(15, ' ') << "Bureaucrat grade change test" << std::endl << std::endl;
	std::cout << ber << std::endl;
	try {
		for (int i = 0; i < 60; i++)
			ber.GradeIncrease();
	} 
	catch (std::exception &out) {
		std::cout << out.what() << std::endl;
	}
	std::cout << ber << std::endl;
	try {
		for (int i = 0; i < 200; i++)
			ber.GradeDecrease();
	} 
	catch (std::exception &out) {
		std::cout << out.what() << std::endl;
	}

	std::cout << std::endl << std::string(15, ' ') << "Form sign and copy test" << std::endl << std::endl;

	Bureaucrat ber3(15, "Vitya");

    try {
        Form form("form", -1, 32);
    }
    catch(const std::exception& out) {
        std::cout << "Error:" <<  out.what() << std::endl;
    }
    try {
        Form form("form", 200, 32);
    }
    catch(const std::exception& out) {
        std::cout << "Error:" << out.what() << std::endl;
    }
	

    Form form("Jaloba", 50, 51);
	std::cout << form;
	
	std::cout << std::endl;

	Form formCopy(form);
    form.beSigned(ber3);
    std::cout << form;

	std::cout << std::endl;

    ber3.SignForm(form);
	ber3.SignForm(formCopy);
	return (0);
}

int	FormsTests() {
	std::srand(time(0));
	
	Bureaucrat ber(26, "Jora");
	Bureaucrat ber2(146, "Sasha");
	Bureaucrat droid(73, "R2D2");

	std::cout << std::endl << std::string(15, ' ') << "PresidentialPardonForm test" << std::endl << std::endl;
	PresidentialPardonForm Press("Press");
	std::cout << Press << std::endl;
	std::cout << ber << std::endl;

	ber.ExecuteForm(Press);
	ber.SignForm(Press);
	ber.GradeIncrease();
	ber.SignForm(Press);
	ber.ExecuteForm(Press);
	for (int i = 0; i < 20; i++)
		ber.GradeIncrease();
	ber.ExecuteForm(Press);
	std::cout << Press << std::endl;
	std::cout << ber << std::endl;

	std::cout << std::endl << std::string(15, ' ') << "ShrubberyCreationForm test" << std::endl << std::endl;
	ShrubberyCreationForm shrubbery("shrubbery");

	std::cout << shrubbery << std::endl;
	std::cout << ber2 << std::endl;

	ber2.ExecuteForm(shrubbery);
	ber2.SignForm(shrubbery);
	ber2.GradeIncrease();
	ber2.SignForm(shrubbery);
	ber2.ExecuteForm(shrubbery);
	for (int i = 0; i < 20; i++)
		ber2.GradeIncrease();
	ber2.ExecuteForm(shrubbery);
	std::cout << shrubbery << std::endl;
	std::cout << ber2 << std::endl;

	std::cout << std::endl << std::string(15, ' ') << "RobotomyRequestForm test" << std::endl << std::endl;

	RobotomyRequestForm robot1("Robot1");
	RobotomyRequestForm robot2("Robot2");
	RobotomyRequestForm robot3("Robot3");

	std::cout << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	std::cout << robot3 << std::endl;

	std::cout << droid << std::endl;

	droid.SignForm(robot1);
	droid.GradeIncrease();

	while (!robot1.IsSign())
		droid.SignForm(robot1);
	while (!robot2.IsSign())
		droid.SignForm(robot2);
	while (!robot3.IsSign())
		droid.SignForm(robot3);

	droid.ExecuteForm(robot1);
	for (int i = 0; i < 30; i++)
		droid.GradeIncrease();
	std::cout << droid << std::endl;
	droid.ExecuteForm(robot1);
	droid.ExecuteForm(robot2);
	droid.ExecuteForm(robot3);

	std::cout << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	std::cout << robot3 << std::endl;
	std::cout << droid << std::endl;	

	return (0);
}

int	main(void) {
	std::srand(time(0));
	Beru_And_Form_Test();
	std::cout << std::endl;
	FormsTests();
	std::cout << std::string(15, ' ') << "End of tests" << std::endl << std::endl;
	return (0);
}