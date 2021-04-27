/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:34:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 19:46:00 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_HitPoints = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 50;
	_MaxEnergyPoints = 50;
	_Level = 1;
	_Name = "NO NAME";
	_MeleeAttack = 20;
	_RangedAttack = 15;
	_ArmorDR = 3;
	std::cout << "ScavTrap " << _Name << " is UNKNOWN from SOMETHING" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_HitPoints = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 50;
	_MaxEnergyPoints = 50;
	_Level = 1;
	_Name = name;
	_MeleeAttack = 20;
	_RangedAttack = 15;
	_ArmorDR = 3;
	std::cout << "ScavTrap " << _Name << " is climb up from hell" << std::endl;

}
ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "SC4V-TP" << obj._Name << " was clonned" << std::endl;
    *this = obj;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &obj) {

	std::cout << "ScavTrap change operator called" << std::endl;
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

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _Name << " is going back to the hell" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP ";
	ClapTrap::rangedAttack(target);
}

void		ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP ";
	ClapTrap::meleeAttack(target);
}

void		ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "SC4V-TP ";
	ClapTrap::takeDamage(amount);
}

void		ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP ";
	ClapTrap::beRepaired(amount);
}

void		ScavTrap::challengeNewcomer(void) {
	std::string const challenge[10] = {"fight", "meeting", "eating", "sleepeng", "thinking", "watching", "nothing", "breathing", "smiling", "crying"};
	int r;
	r = rand() % 10;
	if (_EnergyPoints >= 15)
	{
		_EnergyPoints -= 15;
		std::cout << "SC4V-TP " << _Name << " is starting to " << challenge[r] << " " << _EnergyPoints << " energy points is lost" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << _Name << " tried to start " << challenge[r] << " but don't have enough energy" << std::endl;
	}
}