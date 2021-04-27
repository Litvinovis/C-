/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 20:59:01 by resther           #+#    #+#             */
/*   Updated: 2021/01/20 18:27:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	std::locale	locale;
	std::string	str;
	size_t		len;
	size_t		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int r = 1; r < argc; r++)
		{
			str = argv[r];
			len = str.length();
			for (i = 0; i < len; i++)
				std::cout << std::toupper(str[i], locale);
		}
	}
	std::cout << "\n";
	return (0);
}
