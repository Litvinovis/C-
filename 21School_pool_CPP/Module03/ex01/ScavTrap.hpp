/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:34:30 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 18:12:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap {
private:
	int				SHitPoints;
	int				SMaxHitPoints;
	int				SEnergyPoints;
	int				SMaxEnergyPoints;
	int				SLevel;
	std::string		SName;
	int				SMeleeAttack;
	int				SRangedAttack;
	int				SArmorDR;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap &obj);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif