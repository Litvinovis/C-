/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:41:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/23 12:46:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class		NinjaTrap : public ClapTrap {
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