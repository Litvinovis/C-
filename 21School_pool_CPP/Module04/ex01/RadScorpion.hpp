/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:19 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:36 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy {
public:
	RadScorpion();
	RadScorpion(RadScorpion const &obj);

	RadScorpion & operator=(RadScorpion const &obj);

	virtual ~RadScorpion();
};

#endif
