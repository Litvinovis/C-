/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:34:51 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 17:31:59 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	FHitPoints = 100;
	FMaxHitPoints = 100;
	FEnergyPoints = 100;
	FMaxEnergyPoints = 100;
	FLevel = 1;
	FName = name;
	FMeleeAttack = 30;
	FRangedAttack = 20;
	FArmorDR = 5;
	std::cout << "FragTrap " << FName << " is teleported from spaceship SCP-1447" << std::endl;
}

FragTrap::FragTrap() {
	FHitPoints = 100;
	FMaxHitPoints = 100;
	FEnergyPoints = 100;
	FMaxEnergyPoints = 100;
	FLevel = 1;
	FName = "NO DATA";
	FMeleeAttack = 30;
	FRangedAttack = 20;
	FArmorDR = 5;
	std::cout << "FragTrap " << FName << " is SOMETHING from UNKNOWN" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FR4G-TP " << obj.FName << " was clonned" << std::endl;
    *this = obj;
}

void		FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << FName << " attacks " << target << " at range, causing " << FRangedAttack << " damage" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << FName << " attacks " << target << " at melee, causing " << FMeleeAttack << " damage" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {
	int	TotalDamage = amount - FArmorDR;
	int check = FHitPoints - TotalDamage;
	FHitPoints = (check < 1) ? 0 : check;
	std::cout << "FR4G-TP " << FName << " take " << TotalDamage << " damage, now it's have " << FHitPoints << " hit points"<< std::endl;
}

void		FragTrap::beRepaired(unsigned int amount) {
	int check = FHitPoints + amount;
	FHitPoints = (check > FMaxHitPoints) ? FMaxHitPoints : check;
	std::cout << "FR4G-TP " << FName << " has recover " << amount << " hit points, now it's have " << FHitPoints << " hit points"<< std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string const attack[10] = {"blaster", "sniper rifle", "shotgun", "Pistol", "Revolver", "grenade", "knife", "rocket launcher", "machine gun", "firegun",};

	int r;
	r = rand() % 10;
	if (FEnergyPoints >= 25)
	{
		std::cout << "FR4G-TP " << FName << " attacks " << target << " with " << attack[r] << std::endl;
		FEnergyPoints -= 25;
	}
	else
	{
		std::cout << "FR4G-TP " << FName << " tried to attacks " << target << " with " << attack[r] << " but don't have enough energy" << std::endl;
	}
}

FragTrap & FragTrap::operator=(const FragTrap &obj) {

	std::cout << "FragTrap change operator called" << std::endl;
	if (this != &obj)
	{
		FHitPoints = obj.FHitPoints;
		FMaxHitPoints = obj.FMaxHitPoints;
		FEnergyPoints = obj.FEnergyPoints;
		FMaxEnergyPoints = obj.FMaxEnergyPoints;
		FLevel = obj.FLevel;
		FName = obj.FName;
		FMeleeAttack = obj.FMeleeAttack;
		FRangedAttack = obj.FRangedAttack;
		FArmorDR = obj.FArmorDR;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << FName << " is fall down to black hole" << std::endl;
}
