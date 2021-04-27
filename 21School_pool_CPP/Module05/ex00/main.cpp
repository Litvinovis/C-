/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:55:54 by resther           #+#    #+#             */
/*   Updated: 2021/02/07 13:37:10 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
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
	return (0);
}
