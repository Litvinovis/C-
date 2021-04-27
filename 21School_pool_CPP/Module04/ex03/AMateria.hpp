/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:11:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:52:04 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	AMateria {
protected:
	std::string const	_type;
	unsigned int		_xp;

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &type);

	std::string const &	getType() const;
	virtual AMateria *	clone() const = 0;
	unsigned int	getXP() const;
	virtual void	use(ICharacter &target);

	AMateria &	operator=(AMateria const &obj);

	virtual	~AMateria();
};

#endif
