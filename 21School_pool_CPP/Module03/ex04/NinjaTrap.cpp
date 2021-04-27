/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:40:42 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 17:14:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	_HitPoints = 60;
	_MaxHitPoints = 60;
	_EnergyPoints = 120;
	_MaxEnergyPoints = 120;
	_Level = 1;
	_Name = "Unnamed";
	_MeleeAttack = 60;
	_RangedAttack = 5;
	_ArmorDR = 0;
	std::cout << "NinjaTrap " << _Name << " is coming from Japan" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 60;
	_MaxHitPoints = 60;
	_EnergyPoints = 120;
	_MaxEnergyPoints = 120;
	_Level = 1;
	_Name = name;
	_MeleeAttack = 60;
	_RangedAttack = 5;
	_ArmorDR = 0;
	std::cout << "NinjaTrap " << _Name << " is coming from China" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << _Name << " is dissolved in smoke" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
	std::cout << "NINJ4-TP" << obj._Name << " was clonned" << std::endl;
	*this = obj;
}

NinjaTrap &			NinjaTrap::operator=(const NinjaTrap &a)
{
	std::cout << "Equal NinjaTrap operator is called\n";
	if (this != &a)
	{
		_HitPoints = a._HitPoints;
		_MaxHitPoints = a._MaxHitPoints;
		_EnergyPoints = a._EnergyPoints;
		_MaxEnergyPoints = a._MaxEnergyPoints;
		_Level = a._Level;
		_Name = a._Name;
		_MeleeAttack = a._MeleeAttack;
		_RangedAttack = a._RangedAttack;
		_ArmorDR = a._ArmorDR;
	}
	return (*this);
}

void		NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "NINJ4-TP ";
	ClapTrap::rangedAttack(target);
}

void		NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "NINJ4-TP ";
	ClapTrap::meleeAttack(target);
}

void		NinjaTrap::takeDamage(unsigned int amount) {
	std::cout << "NINJ4-TP ";
	ClapTrap::takeDamage(amount);
}

void		NinjaTrap::beRepaired(unsigned int amount) {
	std::cout << "NINJ4-TP ";
	ClapTrap::beRepaired(amount);
}

void				NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << "NINJ4-TP " << _Name << " attack FR4G-TP at melee, causing " << _MeleeAttack << " damage" << std::endl; 
	obj.takeDamage(_MeleeAttack);
}

void				NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << "NINJ4-TP " << _Name << " attack SC4V-TP at range, causing " << _RangedAttack << " damage" << std::endl; 
	obj.takeDamage(_RangedAttack);
}

void				NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << "NINJ4-TP " << _Name << " attack Cl4P-TP at super puper melee, causing " << (_MeleeAttack * 2)<< " damage" << std::endl; 
	obj.takeDamage((_MeleeAttack * 2));
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	std::cout << "NINJ4-TP " << _Name << " shoot himself in a leg, using C language" << std::endl; 
	obj.takeDamage((_RangedAttack / 2));
}
