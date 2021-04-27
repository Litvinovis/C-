/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:07 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:39:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <sstream>
# include <iostream>
# include <string>

class Enemy {
protected:
	int 			_hp;
	std::string		_type;
	Enemy();
	
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &obj);
	std::string  getType() const;
	virtual void takeDamage(int points);
	int getHp() const;

	Enemy & operator=(Enemy const &obj);

	virtual ~Enemy();
};

#endif
