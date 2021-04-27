/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:35:11 by resther           #+#    #+#             */
/*   Updated: 2021/02/09 11:10:39 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <class T>
void 	swap(T& x, T& y)
{
	T	tmp = x;
	x = y;
	y = tmp;
}

template <class T>
T&		min(T& x, T& y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template <class T>
T&		max(T& x, T& y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif