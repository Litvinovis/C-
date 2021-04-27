/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:59:42 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:25:16 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void		setWeapon(Weapon &weapon);
	void		attack() const;

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
