/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:05:32 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:33:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int		main(void)
{
	srand(time(0));
	void	*obj = serialize();
	Data	*obj2 = deserialize(obj);
	return (0);
}