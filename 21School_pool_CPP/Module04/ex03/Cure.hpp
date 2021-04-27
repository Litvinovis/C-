/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:52:49 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:53:36 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public	AMateria {
public:
	Cure();
	Cure(const Cure &type);

	const std::string &	getType() const;
	unsigned int	getXP() const;

	AMateria*	clone() const;
	void	use(ICharacter &target);
	
	Cure & operator=(Cure const &obj);

	~Cure();
};

#endif
