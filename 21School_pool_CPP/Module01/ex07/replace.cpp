/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:10:42 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 12:04:50 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(std::ifstream &file, std::string name, std::string newstring, std::string oldstring)
{
	std::ofstream	newfile;
	std::string		text;
	std::size_t		pos;
	std::size_t		i = 0;

	newfile.open(name + ".replace", std::ofstream::trunc);
	if (newfile.good() == false)
		std::cout << "Can't open file.replace" << std::endl;
	std::getline(file, text, '\0');
	pos = text.find(newstring);
	while (pos != std::string::npos)
	{
		while (i != pos)
			newfile << text[i++];
		newfile << oldstring;
		i += newstring.size();
		pos = text.find(newstring, i);
	}
	while (i != text.size())
		newfile << text[i++];
}

int		main(int ac, char **av)
{
	std::ifstream	file;

	if (ac != 4)
	{
		std::cout << "Wrong quantity of arguments" << std::endl;
		return (-1);
	}
	file.open(av[1]);
	if (file.good() == false)
	{
		std::cout << "Can't open file" << std::endl;
		return (-1);
	}
	if (std::strlen(av[2]) == 0 || std::strlen(av[3]) == 0)
	{
		std::cout << "Argument is empty" << std::endl;
		file.close();
		return (-1);
	}
	replace(file, av[1], av[2], av[3]);
	file.close();
	return (0);
}