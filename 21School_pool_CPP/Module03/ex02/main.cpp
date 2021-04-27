/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:34:53 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 16:55:26 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

int main(void) {
	std::srand(std::time(0));
	std::cout << std::endl;
	FragTrapTest();
	std::cout << std::endl;
	ScavTrapTest();
	std::cout << std::endl;
	ClapTrapTest();
	return (0);
}
