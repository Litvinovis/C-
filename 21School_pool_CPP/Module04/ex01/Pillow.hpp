/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pillow.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:32:35 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PILLOW_HPP
# define PILLOW_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class Pillow: public AWeapon {
	void attack() const;

public:
	Pillow();
	Pillow(Pillow const &obj);

	Pillow & operator=(Pillow const &obj);

	virtual ~Pillow();
};


#endif
