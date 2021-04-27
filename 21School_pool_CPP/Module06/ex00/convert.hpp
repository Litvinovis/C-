/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 22:58:52 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:46:35 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <limits.h>
# include <limits>

void 	ConversionPrint(char c, int i, float f, double d);
void	CharPrint(char c, bool imp);
void 	IntPrint(int i, bool imp);
void 	All_Impossible();
bool	NaN_check(double number);
bool 	Inf_check(double number);
void 	Double_cast(double const number);
void 	Char_cast(char c);

#endif