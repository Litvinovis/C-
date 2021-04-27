/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:10:31 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:50:32 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int maintest() {

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}

int main() {

	std::cout << std::endl;
	std::cout << std::string(15, ' ') << "Standard test" << std::endl;
	std::cout << std::endl;
	maintest();
	std::cout << std::endl;

	std::cout << std::string(15, ' ') << "Additional test" << std::endl;
	std::cout << std::endl;

	ISpaceMarine* pupa = new TacticalMarine;
	ISpaceMarine* lupa = new AssaultTerminator;
	Squad* team = new Squad;
	team->push(pupa);
	team->push(lupa);

	Squad* dreamteam = new Squad( *team );

	std::cout << std::endl << "test team" << std::endl << std::endl;

	for (int i = 0; i < team->getCount(); ++i)
	{
		ISpaceMarine* cur = team->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl << "test dreamteam" << std::endl << std::endl;

	for (int i = 0; i < dreamteam->getCount(); ++i)
	{
		ISpaceMarine* cur = dreamteam->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete team;

	std::cout << std::endl << "test dreamteam-2" << std::endl << std::endl;

	for (int i = 0; i < dreamteam->getCount(); ++i)
	{
		ISpaceMarine* cur = dreamteam->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl << "test dreamteam-3" << std::endl << std::endl;

	ISpaceMarine* za = new TacticalMarine;

	dreamteam->push(za);
	dreamteam->push(za);

	for (int i = 0; i < dreamteam->getCount(); ++i)
	{
		ISpaceMarine* cur = dreamteam->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete dreamteam;
	return (0);
}