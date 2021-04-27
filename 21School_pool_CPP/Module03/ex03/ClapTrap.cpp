/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:45:01 by resther           #+#    #+#             */
/*   Updated: 2021/01/23 12:31:24 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	_HitPoints = 0;
	_MaxHitPoints = 50;
	_EnergyPoints = 100;
	_MaxEnergyPoints = 100;
	_Level = 1;
	_Name = name;
	_MeleeAttack = 30;
	_RangedAttack = 20;
	_ArmorDR = 5;
	std::cout << _Name << " is appear from future" << std::endl;
}

ClapTrap::ClapTrap() {
	_HitPoints = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 100;
	_MaxEnergyPoints = 100;
	_Level = 1;
	_Name = "NO DATA";
	_MeleeAttack = 30;
	_RangedAttack = 20;
	_ArmorDR = 5;
	std::cout << _Name << " is appear from back" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << obj._Name << " was clonned" << std::endl;
    *this = obj;
}

void		ClapTrap::rangedAttack(std::string const & target) {
	std::cout << _Name << " attacks " << target << " at range, causing " << _RangedAttack << " damage" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) {
	std::cout << _Name << " attacks " << target << " at melee, causing " << _MeleeAttack << " damage" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	int	TotalDamage = amount - _ArmorDR;
	int check = _HitPoints - TotalDamage;
	_HitPoints = (check < 1) ? 0 : check;
	std::cout << _Name << " take " << TotalDamage << " damage, now it's have " << _HitPoints << " hit points"<< std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	int check = _HitPoints + amount;
	_HitPoints = (check > _MaxHitPoints) ? _MaxHitPoints : check;
	std::cout << _Name << " has recover " << amount << " hit points, now it's have " << _HitPoints << " hit points"<< std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &obj) {

	std::cout << "ClapTrap change operator called" << std::endl;
	if (this != &obj)
	{
		_HitPoints = obj._HitPoints;
		_MaxHitPoints = obj._MaxHitPoints;
		_EnergyPoints = obj._EnergyPoints;
		_MaxEnergyPoints = obj._MaxEnergyPoints;
		_Level = obj._Level;
		_Name = obj._Name;
		_MeleeAttack = obj._MeleeAttack;
		_RangedAttack = obj._RangedAttack;
		_ArmorDR = obj._ArmorDR;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _Name << " is terminated by hero" << std::endl;
}
