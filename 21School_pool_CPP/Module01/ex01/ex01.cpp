/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:22:41 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 10:33:38 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void) {
	std::string	*panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void) {
	memoryLeak();
	return (0);
}