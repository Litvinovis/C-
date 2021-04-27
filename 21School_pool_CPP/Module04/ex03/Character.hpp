/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:34:06 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:53:21 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include "AMateria.hpp"

class	Character : public	ICharacter {
	std::string	_name;
	AMateria*	_inventory[4];

private:
	static const int	MaxInventary = 4;

public:
	Character(std::string const &name);
	Character(Character const &obj);

	std::string const &	getName() const;
	void	use(int idx, ICharacter &target);
	void	equip(AMateria *m);
	void	unequip(int idx);

	Character &	operator=(Character const &obj);

	~Character();
};

#endif
