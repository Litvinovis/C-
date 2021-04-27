/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:15:24 by resther           #+#    #+#             */
/*   Updated: 2021/02/09 13:35:47 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <iomanip>

template <class T>
void	print_array(T& c)
{
	std::cout << " " << c << std::endl;
}

template <class T>
void	iter(T* object, int len, void (*func)(T&))
{
	for (int i = 0; i < len; i++)
	{
		try
		{	
			(*func)(object[i]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}

#endif