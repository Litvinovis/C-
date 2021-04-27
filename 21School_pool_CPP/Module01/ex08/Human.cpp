/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 23:08:18 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 12:31:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void	Human::meleeAttack(std::string const &target) {
	std::cout << "Melle attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target) {
	std::cout << "Ranged attack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target) {
	std::cout << "Shoot at " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target) {

	int	act;

	void (Human:: *actions[3])(std::string const & target) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	
	act = ("meleeAttack" == action_name) ? 0 :
		("rangedAttack" == action_name) ? 1 :
		("intimidatingShout" == action_name) ? 2
		: throw "Unsuccessful attack";
	(this->*actions[act])(target);
}