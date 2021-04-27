/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:56:24 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 10:47:59 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <iterator>

template <typename T>
typename T::iterator easyfind (T& array, int nbr)
{
	for (typename T::iterator it = array.begin(); it != array.end(); it++)
	{
		if (*it == nbr)
			return (it);
	}
	throw (std::string("Here are no such element"));
}

#endif