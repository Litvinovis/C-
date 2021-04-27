/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:35:07 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 17:39:51 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap {
private:
	int				FHitPoints;
	int				FMaxHitPoints;
	int				FEnergyPoints;
	int				FMaxEnergyPoints;
	int				FLevel;
	std::string		FName;
	int				FMeleeAttack;
	int				FRangedAttack;
	int				FArmorDR;
	
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