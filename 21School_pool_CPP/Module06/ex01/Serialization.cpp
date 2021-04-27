/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:42:30 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:33:44 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

void * serialize(void)
{
	char	*str = new char[20];
	int		nbr;

	std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::cout << "Serialize: " << std::endl << std::endl;
	std::cout << "Step 1 - create 8 random char: ";
	for (int i = 0; i < 8; i++)
	{
		str[i] = chars[rand() % 52];
		std::cout << str[i];
	}
	std::cout << std::endl;
	nbr = rand() % 900;
	std::cout << "Step 2 - create 1 random int:  " << nbr << std::endl;
	*reinterpret_cast<int *>(&str[8]) = nbr;
	std::cout << "Step 3 - create 8 random char: ";
	for (int i = 12; i < 20; i++)
	{
		str[i] = chars[rand() % 52];
		std::cout << str[i];
	}
	std::cout << std::endl << std::endl;
	return (reinterpret_cast<void *>(str));
}

Data * deserialize(void * raw)
{
	Data	*data = new Data;
	char	*tmp = reinterpret_cast<char *>(raw);

	std::cout << "Deserialize: " << std::endl << std::endl;
	data->str_first = std::string(tmp, 8);
	std::cout << "Step 1 - str_first:  " << data->str_first << std::endl;
	data->number = *reinterpret_cast<int*>(&tmp[8]);
	std::cout << "Step 2 - int:        " << data->number << std::endl;
	data->str_second = std::string(&tmp[12], 8);
	std::cout << "Step 3 - str_second: " << data->str_second << std::endl << std::endl;

	return (data);
}
