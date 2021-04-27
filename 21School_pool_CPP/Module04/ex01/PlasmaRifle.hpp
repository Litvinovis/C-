/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:13 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:12 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	void attack() const;

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &obj);

	PlasmaRifle & operator=(PlasmaRifle const &obj);

	virtual ~PlasmaRifle();
};


#endif
