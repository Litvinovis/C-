/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:12:57 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 19:19:48 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Air.hpp"
#include "Gas.hpp"

int maintest()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
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

	IMateriaSource* inventary = new MateriaSource();
	ICharacter* Hero = new Character("Hero");
	inventary->learnMateria(new Ice());
	inventary->learnMateria(new Cure());
	inventary->learnMateria(new Gas());
	inventary->learnMateria(new Air());
	
	ICharacter* Victim = new Character("Victim");

	AMateria* tmp;
	tmp = inventary->createMateria("ice");
	Hero->equip(tmp);
	tmp = inventary->createMateria("cure");
	Hero->equip(tmp);
	tmp = inventary->createMateria("air");
	Hero->equip(tmp);
	tmp = inventary->createMateria("gas");
	Hero->equip(tmp);

	Hero->use(0, *Victim);
	Hero->use(1, *Victim);
	Hero->use(2, *Victim);
	Hero->use(3, *Victim);
	
	std::cout << std::endl;
	std::cout << "test unequip" << std::endl;

	Hero->unequip(2);
	Hero->use(2, *Victim);
	Hero->use(3, *Victim);

	std::cout << std::endl;
	std::cout << "test XP system" << std::endl;

	std::cout << tmp->getXP() << std::endl;
	Hero->use(3, *Victim);
	std::cout << tmp->getXP() << std::endl;

	std::cout << std::endl;
	delete Victim;
	delete Hero;
	delete inventary;
	return (0);
}