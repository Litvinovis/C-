/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:34:53 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 17:16:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	FragTrapTest(void) {

	std::cout << std::string(15, ' ') << "Test of FragTrap" << std::endl << std::endl;

	FragTrap  Jelezyaka("Jelezyaka");

	std::cout << std::endl;

	Jelezyaka.rangedAttack("Humanity");
	Jelezyaka.meleeAttack("Your ass");
	Jelezyaka.takeDamage(25);
	Jelezyaka.beRepaired(10);
	Jelezyaka.beRepaired(100);
	Jelezyaka.takeDamage(150);

	std::cout << std::endl;

	Jelezyaka.vaulthunter_dot_exe("Enemy1");
	Jelezyaka.vaulthunter_dot_exe("Enemy2");
	Jelezyaka.vaulthunter_dot_exe("Enemy3");
	Jelezyaka.vaulthunter_dot_exe("Enemy4");
	Jelezyaka.vaulthunter_dot_exe("Enemy5");

	std::cout << std::endl;
	return (0);
}

int ScavTrapTest(void) {
	std::cout << std::string(15, ' ') << "Test of ScavTrap" << std::endl << std::endl;

	ScavTrap	Transformer("Transformer");

	std::cout << std::endl;

	Transformer.rangedAttack("Humanity");
	Transformer.meleeAttack("Your ass");
	Transformer.takeDamage(25);
	Transformer.beRepaired(10);
	Transformer.beRepaired(100);
	Transformer.takeDamage(150);

	std::cout << std::endl;

	Transformer.challengeNewcomer();
	Transformer.challengeNewcomer();
	Transformer.challengeNewcomer();
	Transformer.challengeNewcomer();

	std::cout << std::endl;
	return (0);
}

int	ClapTrapTest(void) {
	std::cout << std::string(15, ' ') << "Test of ClapTrap" << std::endl << std::endl;

	ClapTrap	Clapper("Clapper");

	std::cout << std::endl;

	Clapper.rangedAttack("Humanity");
	Clapper.meleeAttack("Your ass");
	Clapper.takeDamage(25);
	Clapper.beRepaired(10);
	Clapper.beRepaired(100);
	Clapper.takeDamage(150);

	std::cout << std::endl;

	return (0);
}

int	NinjaTrapTest(void) {

	std::cout << std::string(15, ' ') << "Test of NinjaTrap" << std::endl << std::endl;

	NinjaTrap	Ninja("Ninja");

	std::cout << std::endl;

	Ninja.rangedAttack("Humanity");
	Ninja.meleeAttack("Your ass");
	Ninja.takeDamage(25);
	Ninja.beRepaired(10);
	Ninja.beRepaired(100);
	Ninja.takeDamage(150);

	std::cout << std::endl;
	std::cout << "test attack NinjaTrap" << std::endl;
	std::cout << std::endl;

	FragTrap	Jelezyaka("Jelezyaka");
	ScavTrap	Transformer("Transformer");
	ClapTrap	TestTrap("TestTrap");

	std::cout << std::endl;

	Ninja.ninjaShoebox(Jelezyaka);
	Ninja.ninjaShoebox(Transformer);
	Ninja.ninjaShoebox(TestTrap);
	Ninja.ninjaShoebox(Ninja);

	std::cout << std::endl;
	return (0);
}

int	SuperTrapTest(void) {
	std::cout << std::string(15, ' ') << "Test of SuperTrap" << std::endl << std::endl;

	SuperTrap	Super("Super");

	std::cout << std::endl;

	Super.rangedAttack("Humanity");
	Super.meleeAttack("Your ass");

	std::cout << std::endl;
	std::cout << "test attack SuperTrap" << std::endl;
	std::cout << std::endl;

	FragTrap	Jelezyaka("Jelezyaka");
	ScavTrap	Transformer("Transformer");
	ClapTrap	TestTrap("TestTrap");

	std::cout << std::endl;

	Super.ninjaShoebox(Jelezyaka);
	Super.ninjaShoebox(Transformer);
	Super.ninjaShoebox(TestTrap);
	Super.vaulthunter_dot_exe("TestTrap, Transformer, Jelezyaka");

	std::cout << std::endl;
	return (0);

}

int main(void) {
	std::srand(std::time(0));
	std::cout << std::endl;
	FragTrapTest();
	std::cout << std::endl;
	ScavTrapTest();
	std::cout << std::endl;
	ClapTrapTest();
	std::cout << std::endl;
	NinjaTrapTest();
	std::cout << std::endl;
	SuperTrapTest();
	return (0);
}
