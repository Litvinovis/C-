/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:06 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:39:42 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type) {
}

Enemy::Enemy() {
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHp() const {
	return _hp;
}

Enemy::Enemy(const Enemy &obj) {
	*this = obj;
}

Enemy &Enemy::operator=(const Enemy &obj) {
	if (this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

void Enemy::takeDamage(int points) {
	if (points < 0)
		return;
	if (this->_hp > points)
		this->_hp -= points;
	else
		delete this;
}

Enemy::~Enemy() {
}