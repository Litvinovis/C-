/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:16 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:23 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	void attack() const;

public:
	PowerFist();
	PowerFist(PowerFist const &obj);

	PowerFist & operator=(PowerFist const &obj);

	virtual ~PowerFist();
};

#endif
