/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 22:10:53 by resther           #+#    #+#             */
/*   Updated: 2021/01/20 18:43:05 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "contact.hpp"
# include "phonebook.hpp"

int		main(void)
{
	PhoneBook	lst_contact;
	std::string	cmd_line;
	int			i;

	i = 1;
	while (i)
	{
		std::cout << "Choose action:\nSEARCH\nADD\nEXIT\n" << std::endl;;
		std::getline (std::cin, cmd_line);
		if (cmd_line == "EXIT")
			i = 0;
		else if (cmd_line == "ADD")
			lst_contact.add();
		else if (cmd_line == "SEARCH")
			lst_contact.search();
		else
			std::cout << "Command not found" << std::endl;
	}
	return (0);
}
