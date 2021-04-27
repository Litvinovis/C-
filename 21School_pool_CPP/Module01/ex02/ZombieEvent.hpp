/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:49:34 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 10:36:57 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT
# define ZOMBIE_EVENT
# include "Zombie.hpp"

class ZombieEvent {
public:
	void	setZombieType(std::string type);
	Zombie*	NewZombie(std::string name);

private:
	std::string	ztype;
};

#endif