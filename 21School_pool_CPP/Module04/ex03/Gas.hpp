/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gas.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:26:45 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 17:52:58 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAS_HPP
# define GAS_HPP

# include "AMateria.hpp"

class	Gas : public	AMateria {
public:
	Gas();
	Gas(const Gas &type);

	const std::string &	getType() const;
	unsigned int	getXP() const;

	AMateria*	clone() const;
	void	use(ICharacter &target);

	Gas	& operator=(Gas const &obj);

	~Gas();
};

#endif
