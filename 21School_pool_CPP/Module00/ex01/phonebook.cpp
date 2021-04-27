/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 22:11:02 by resther           #+#    #+#             */
/*   Updated: 2021/01/20 18:47:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

PhoneBook::PhoneBook() : num(0) {
}

void	PhoneBook::add() {
	if (num == 8)
	{
		std::cout << "Oops, there are no space anymore" << std::endl;
		return;
	}
	else
		(lst_contact[num]).add();
	num++;
}

void	PhoneBook::search() {
	int			idx;

	if (num == 0)
	{
		std::cout << "Phonebook is empty, please add new contact" << std::endl;
		return ;
	}
	std::cout << std::string(45, '_') << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < num; i++)
		(lst_contact[i]).print_line(i);
	std::cout << std::setw(10) << "Select an index: ";
	while (!(std::cin >> idx) || idx < 0 || idx >= num)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "You can insert index between 0 and" << num - 1 <<": ";
	}
	std::cin.ignore();
	(lst_contact[idx]).print_all();
}

PhoneBook::~PhoneBook() {
}