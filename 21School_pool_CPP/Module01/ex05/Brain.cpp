/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:12:14 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 10:58:12 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

}
Brain::~Brain() {

}

std::string	Brain::identify() const
{
	std::stringstream link;
	link << (void*)this;
	return (link.str());
}