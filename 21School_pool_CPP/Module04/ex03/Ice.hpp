/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:59:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:53:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public	AMateria {
public:
	Ice();
	Ice(const Ice &type);

	const std::string &	getType() const;
	unsigned int	getXP() const;

	AMateria*	clone() const;
	void	use(ICharacter &target);

	Ice	&	operator=(Ice const &obj);

	~Ice();
};

#endif
