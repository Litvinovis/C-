/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:35:07 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 16:21:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
	int	static const	FHitPoints = 100;
	int	static const	FMaxHitPoints = 100;
	int	static const	FEnergyPoints = 100;
	int	static const	FMaxEnergyPoints = 100;
	int	static const	FLevel = 1;
	int	static const	FMeleeAttack = 30;
	int	static const	FRangedAttack = 25;
	int	static const	FArmorDR = 5;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	~FragTrap();

	FragTrap &	operator=(const FragTrap &obj);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif