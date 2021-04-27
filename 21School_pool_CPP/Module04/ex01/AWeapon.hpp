/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:51:23 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:15:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <sstream>
# include <iostream>
# include <string>

class AWeapon {
protected:
	std::string _name;
	int 		_apcost;
	int 		_damage;
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon& obj);
	int getAPCost() const;
	int getDamage() const;
	std::string getName() const;
	virtual void attack() const = 0;

	AWeapon& operator=(AWeapon const& obj);

	virtual ~AWeapon();
};

std::ostream & operator<<(std::ostream& os,AWeapon const& obj);

#endif
