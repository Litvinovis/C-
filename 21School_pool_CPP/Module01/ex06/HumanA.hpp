/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:33:58 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 11:13:15 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &wpn);
	~HumanA();
	void		attack() const;

private:
	std::string _name;
	Weapon &_weapon;
};
#endif