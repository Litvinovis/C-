/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:05:32 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 16:37:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	std::cout << "UNNAMED SuperTrap is conimg....\n";
	_HitPoints = FHitPoints;
	_MaxHitPoints = FMaxHitPoints;
	_EnergyPoints = NEnergyPoints;
	_MaxEnergyPoints = NMaxEnergyPoints;
	_Level = 1;
	_Name = "Unnamed";
	_MeleeAttack = NRangedAttack;
	_RangedAttack = FMeleeAttack;
	_ArmorDR = FArmorDR;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	_HitPoints = FHitPoints;
	_MaxHitPoints = FMaxHitPoints;
	_EnergyPoints = NEnergyPoints;
	_MaxEnergyPoints = NMaxEnergyPoints;
	_Level = 1;
	_Name = name;
	_MeleeAttack = NRangedAttack;
	_RangedAttack = FMeleeAttack;
	_ArmorDR = FArmorDR;
	std::cout << "SuperTrap " << _Name << " is coming...\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << _Name << "is killed\n";
}

SuperTrap::SuperTrap(const SuperTrap &obj) : FragTrap(obj), NinjaTrap(obj)
{
	std::cout << "Copy SuperTrap is coming\n";
	*this = obj;
}

SuperTrap &			SuperTrap::operator=(const SuperTrap &obj)
{
	std::cout << "Equal SuperTrap operator is called\n";
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
