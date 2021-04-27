/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:34:51 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 16:34:37 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_HitPoints = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 100;
	_MaxEnergyPoints = 100;
	_Level = 1;
	_Name = name;
	_MeleeAttack = 30;
	_RangedAttack = 20;
	_ArmorDR = 5;
	std::cout << "FragTrap " << _Name << " is teleported from spaceship SCP-1447" << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	_HitPoints = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 100;
	_MaxEnergyPoints = 100;
	_Level = 1;
	_Name = "NO DATA";
	_MeleeAttack = 30;
	_RangedAttack = 20;
	_ArmorDR = 5;
	std::cout << "FragTrap " << _Name << " is SOMETHING from UNKNOWN" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FR4G-TP " << obj._Name << " was clonned" << std::endl;
    *this = obj;
}

void		FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP ";
	ClapTrap::rangedAttack(target);
}

void		FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP ";
	ClapTrap::meleeAttack(target);
}

void		FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP ";
	ClapTrap::takeDamage(amount);
}

void		FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP ";
	ClapTrap::beRepaired(amount);
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string const attack[10] = {"blaster", "sniper rifle", "shotgun", "Pistol", "Revolver", "grenade", "knife", "rocket launcher", "machine gun", "firegun",};

	int r;
	r = rand() % 10;
	if (_EnergyPoints >= 25)
	{
		_EnergyPoints -= 25;
		std::cout << "FR4G-TP " << _Name << " attacks " << target << " with " << attack[r] << " " << _EnergyPoints << " energy points is lost" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << _Name << " tried to attacks " << target << " with " << attack[r] << " but don't have enough energy" << std::endl;
	}
}

FragTrap & FragTrap::operator=(const FragTrap &obj) {

	std::cout << "FragTrap change operator called" << std::endl;
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

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _Name << " is fall down to black hole" << std::endl;
}
