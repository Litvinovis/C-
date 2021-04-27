/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:30:30 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:24:05 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	brain("HI THIS IS BRAIN");
	std::string* PtoBrain = &brain;
	std::string& RtoBrain = brain;
	std::cout << *PtoBrain << " | " << RtoBrain << std::endl;
	return (0);
}