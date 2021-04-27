/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:04 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 10:56:13 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <sstream>
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:
	std::string		_name;
	unsigned int	_ap;
	unsigned int	_maxAp;
	AWeapon 		*_weapon;
	Character();
	
public:
	Character(std::string const & name);
	Character(Character const &obj);

	void recoverAP();
	const std::string &getName() const;
	AWeapon *getWeapon() const;
	unsigned int getAp() const;
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	Character & operator=(Character const &obj);

	~Character();
};

std::ostream & operator<<(std::ostream & out, Character & obj);

#endif
