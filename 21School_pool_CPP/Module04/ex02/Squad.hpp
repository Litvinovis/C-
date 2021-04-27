/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:13:33 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 19:09:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"
# include "ISquad.hpp"

typedef struct	s_squad {
	ISpaceMarine	*unit;
	struct s_squad	*next;
}				t_squad;

class	Squad : public	ISquad {
	int		_Num;
	t_squad	*_Units;

public:
	Squad();
	Squad(const Squad &obj);

	virtual int	getCount() const;
	virtual ISpaceMarine *	getUnit(int) const;
	virtual int		push(ISpaceMarine*);
	void	deleteUnits();

	Squad &	operator=(const Squad &obj);

	virtual	~Squad();
};

#endif
