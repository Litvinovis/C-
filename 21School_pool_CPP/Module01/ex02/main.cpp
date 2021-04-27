/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:21:00 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:23:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>

std::string const names[13] = {"Dima", "Victor", "Egor", "Igor", "Denis", "Tamara", "Adel", "Ivan", "Danil", "Alina", "Masha", "Sasha", "Ruslan"};

void	randomChump()
{
	int i;
	int loop;
	
	loop = 0;
	while (loop < 3)
	{
		i = rand() % 13;
		Zombie dead(names[i], "Randomer");
		dead.announce();
		loop++;
	}
}


int		main()
{
	std::srand(std::time(0));
		
	Zombie		*ZombieOnHeap;
	ZombieEvent	Event;
	
	Event.setZombieType("Heaper");
	ZombieOnHeap = Event.NewZombie("White Walker");
	ZombieOnHeap->announce();
	delete ZombieOnHeap;
	
	randomChump();
	
	return (0);
}