/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:02:21 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:23:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::~ZombieHorde (void) {
	delete [] _zombies;
}

void	ZombieHorde::announce() {
	int r;

	r = -1;
	while (++r < _num)
		_zombies[r].announce();
}

ZombieHorde::ZombieHorde(int N) {
	_num = N;
	_zombies = new Zombie[N];
}