/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Air.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:27:54 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 17:32:18 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AIR_HPP
# define AIR_HPP

# include "AMateria.hpp"

class	Air : public	AMateria {
public:
	Air();
	Air(const Air &type);

	const std::string &	getType() const;
	unsigned int	getXP() const;

	AMateria*	clone() const;
	void	use(ICharacter &target);

	Air	&	operator=(Air const &a);

	~Air();
};

#endif
