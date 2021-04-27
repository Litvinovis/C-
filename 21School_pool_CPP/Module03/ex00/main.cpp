/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:34:53 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 17:05:54 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {

	std::srand(std::time(0));
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
	Clone.takeDamage(101);

	std::cout << std::endl;

	BostonDynamic.vaulthunter_dot_exe("Enemy1");
	BostonDynamic.vaulthunter_dot_exe("Enemy2");
	BostonDynamic.vaulthunter_dot_exe("Enemy3");
	BostonDynamic.vaulthunter_dot_exe("Enemy4");
	BostonDynamic.vaulthunter_dot_exe("Enemy5");

	std::cout << std::endl;

	return (0);
}
