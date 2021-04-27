/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:28:36 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:24:46 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA() {}

void	HumanA::attack() const {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}