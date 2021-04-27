/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AngryCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:36:46 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:15:40 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANGRYCAT_HPP
# define ANGRYCAT_HPP

#include "Enemy.hpp"

class AngryCat: public Enemy {
public:
	AngryCat();
	AngryCat(AngryCat const &obj);

	AngryCat & operator=(AngryCat const &obj);

	virtual ~AngryCat();
};

#endif
