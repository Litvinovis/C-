/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:10 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 12:51:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "AngryCat.hpp"
#include "TRex.hpp"
#include "Pillow.hpp"
#include "Revolver.hpp"

int maintest() {

	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	return 0;
}

int main()
{
	std::cout << std::endl;
	std::cout << std::string(15, ' ') << "Standard test" << std::endl;
	std::cout << std::endl;
	maintest();
	std::cout << std::endl;

	std::cout << std::string(15, ' ') << "Additional test" << std::endl;
	std::cout << std::endl;

	Character* Hero = new Character("Hero");
	std::cout << *Hero;
	Enemy* Koshara = new AngryCat();
	Enemy* Dino = new TRex();
	AWeapon* rev = new Revolver();
	AWeapon* pil = new Pillow();
	Hero->equip(pil);
	Hero->attack(Koshara);
	std::cout << *Hero;
	Hero->attack(Koshara);
	std::cout << *Hero;
	Hero->attack(Koshara);
	std::cout << *Hero;
	Hero->equip(rev);
	std::cout << *Hero;
	Hero->attack(Dino);
	std::cout << *Hero;
	Hero->attack(Dino);
	std::cout << *Hero;

	std::cout << std::endl;
	std::cout << std::string(15, ' ') << "Recover test" << std::endl;
	std::cout << std::endl;

	Hero->recoverAP();
	Hero->recoverAP();
	Hero->recoverAP();

	std::cout << *Hero;
	Hero->attack(Dino);
	std::cout << *Hero;
	Hero->attack(Dino);
	std::cout << *Hero;
	return 0;
}