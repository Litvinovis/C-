/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:22:29 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 16:46:34 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public	IMateriaSource {
	AMateria*	_inventory[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &a);

	virtual void	learnMateria(AMateria *);
	virtual AMateria*	createMateria(std::string const &type);

	MateriaSource & operator=(const MateriaSource &a);

	virtual ~MateriaSource();
};

#endif
