/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:21:36 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 11:18:59 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMMARINE_HPP
# define TACTICALMMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class	TacticalMarine: public	ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &obj);

	void battleCry() const ;
	void meleeAttack() const;
	void rangedAttack() const;
	ISpaceMarine *clone() const;

	TacticalMarine &operator=(const TacticalMarine &obj);

	virtual ~TacticalMarine();
};

#endif
