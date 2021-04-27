/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:34:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 18:33:18 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	SHitPoints = 100;
	SMaxHitPoints = 100;
	SEnergyPoints = 50;
	SMaxEnergyPoints = 50;
	SLevel = 1;
	SName = "NO NAME";
	SMeleeAttack = 20;
	SRangedAttack = 15;
	SArmorDR = 3;
	std::cout << "ScavTrap " << SName << " is UNKNOWN from SOMETHING" << std::endl;
}
ScavTrap::ScavTrap(std::string name) {
	SHitPoints = 100;
	SMaxHitPoints = 100;
	SEnergyPoints = 50;
	SMaxEnergyPoints = 50;
	SLevel = 1;
	SName = name;
	SMeleeAttack = 20;
	SRangedAttack = 15;
	SArmorDR = 3;
	std::cout << "ScavTrap " << SName << " is climb up from hell" << std::endl;

}
ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "SC4V-TP" << obj.SName << " was clonned" << std::endl;
    *this = obj;

}

ScavTrap & ScavTrap::operator=(const ScavTrap &obj) {

	std::cout << "ScavTrap change operator called" << std::endl;
	if (this != &obj)
	{
		SHitPoints = obj.SHitPoints;
		SMaxHitPoints = obj.SMaxHitPoints;
		SEnergyPoints = obj.SEnergyPoints;
		SMaxEnergyPoints = obj.SMaxEnergyPoints;
		SLevel = obj.SLevel;
		SName = obj.SName;
		SMeleeAttack = obj.SMeleeAttack;
		SRangedAttack = obj.SRangedAttack;
		SArmorDR = obj.SArmorDR;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << SName << " is going back to the hell" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << SName << " attacks " << target << " at range, causing " << SRangedAttack << " damage" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP " << SName << " attacks " << target << " at melee, causing " << SMeleeAttack << " damage" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	int	TotalDamage = amount - SArmorDR;
	int check = SHitPoints - TotalDamage;
	SHitPoints = (check < 1) ? 0 : check;
	std::cout << "SC4V-TP " << SName << " take " << TotalDamage << " damage, now it's have " << SHitPoints << " hit points"<< std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	int check = SHitPoints + amount;
	SHitPoints = (check > SMaxHitPoints) ? SMaxHitPoints : check;
	std::cout << "SC4V-TP " << SName << " has recover " << amount << " hit points, now it's have " << SHitPoints << " hit points"<< std::endl;
}

void		ScavTrap::challengeNewcomer(void) {
	std::string const challenge[10] = {"fight", "meeting", "eating", "sleepeng", "thinking", "watching", "nothing", "breathing", "smiling", "crying",};
	int r;
	r = rand() % 10;
	if (SEnergyPoints >= 15)
	{
		SEnergyPoints -= 15;
		std::cout << "SC4V-TP " << SName << " is starting to " << challenge[r] << " " << SEnergyPoints << " energy points is lost" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << SName << " tried to start " << challenge[r] << " but don't have enough energy" << std::endl;
	}
}