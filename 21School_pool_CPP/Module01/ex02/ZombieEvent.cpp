/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:48:09 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:22:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type) {
	ztype = type;
}

Zombie*	ZombieEvent::NewZombie(std::string name) {
	Zombie *deadman;
	deadman = new Zombie(name, ztype);
	return (deadman);
}
