/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:04:58 by resther           #+#    #+#             */
/*   Updated: 2021/01/27 11:12:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class	AssaultTerminator: public	ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &obj);

	void battleCry() const ;
	void meleeAttack() const;
	void rangedAttack() const;
	ISpaceMarine *clone() const;

	AssaultTerminator& operator=(const AssaultTerminator & obj);

	virtual ~AssaultTerminator();
};

#endif
