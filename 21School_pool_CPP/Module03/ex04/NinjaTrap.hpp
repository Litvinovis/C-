/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:41:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 16:11:59 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class		NinjaTrap : virtual public ClapTrap {
protected:
	int	static const	NHitPoints = 60;
	int	static const	NMaxHitPoints = 60;
	int	static const	NEnergyPoints = 120;
	int	static const	NMaxEnergyPoints = 120;
	int	static const	NLevel = 1;
	int	static const	NMeleeAttack = 60;
	int	static const	NRangedAttack = 5;
	int	static const	NArmorDR = 0;

public:

	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &obj);
	~NinjaTrap();

	NinjaTrap & operator=(const NinjaTrap &obj);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		ninjaShoebox(FragTrap &obj);
	void		ninjaShoebox(ScavTrap &obj);
	void		ninjaShoebox(ClapTrap &obj);
	void		ninjaShoebox(NinjaTrap &obj);
};

#endif