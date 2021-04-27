/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:48:29 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:33:51 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <cstdlib>
# include <string>

struct Data 
{
	std::string	str_first;
	std::string	str_second;
	int			number;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif