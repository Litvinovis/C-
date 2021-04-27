/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:10:03 by resther           #+#    #+#             */
/*   Updated: 2021/01/24 16:49:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class		SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &a);
	~SuperTrap();

	SuperTrap &	operator = (const SuperTrap &a);

	using		FragTrap::rangedAttack;
	using		NinjaTrap::meleeAttack;
};

#endif
