/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:32:15 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:25:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
	public:
	Weapon(std::string type);
	~Weapon();
	std::string		getType(void) const;
	void			setType(std::string type);
	
	private:
	std::string	_type;
};
#endif