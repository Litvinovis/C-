/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:34:53 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 19:51:22 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	FragTrapTest(void) {

	std::cout << std::string(15, ' ') << "Test of FragTrap" << std::endl << std::endl;

	FragTrap	Jelezyaka;
	FragTrap	BostonDynamic("RoboDog");
	FragTrap	Clone(BostonDynamic);

	std::cout << std::endl;

	BostonDynamic.rangedAttack("Humanity");
	Clone.meleeAttack("Your ass");
	Jelezyaka.takeDamage(25);
	Jelezyaka.beRepaired(10);
	Jelezyaka.beRepaired(100);
	Clone.takeDamage(150);

	std::cout << std::endl;

	BostonDynamic.vaulthunter_dot_exe("Enemy1");
	BostonDynamic.vaulthunter_dot_exe("Enemy2");
	BostonDynamic.vaulthunter_dot_exe("Enemy3");
	BostonDynamic.vaulthunter_dot_exe("Enemy4");
	BostonDynamic.vaulthunter_dot_exe("Enemy5");

	std::cout << std::endl;
	return (0);
}

int ScavTrapTest(void) {
	std::cout << std::string(15, ' ') << "Test of ScavTrap" << std::endl << std::endl;

	ScavTrap	Transformer;
	ScavTrap	Terminator("Zloy");
	ScavTrap	T1000(Terminator);

	std::cout << std::endl;

	Terminator.rangedAttack("Humanity");
	T1000.meleeAttack("Your ass");
	Transformer.takeDamage(25);
	Transformer.beRepaired(10);
	Transformer.beRepaired(100);
	T1000.takeDamage(150);

	std::cout << std::endl;

	Terminator.challengeNewcomer();
	Terminator.challengeNewcomer();
	Terminator.challengeNewcomer();
	Terminator.challengeNewcomer();

	std::cout << std::endl;
	return (0);
}

int main(void) {
	std::srand(std::time(0));
	std::cout << std::endl;
	FragTrapTest();
	std::cout << std::endl;
	ScavTrapTest();
	return (0);
}
