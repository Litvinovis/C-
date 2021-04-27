/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TRex.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:36:49 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:41:11 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREX_HPP
# define TREX_HPP

#include "Enemy.hpp"

class TRex: public Enemy {
public:
	TRex();
	TRex(TRex const &obj);

	TRex & operator=(TRex const &obj);

	virtual ~TRex();
};

#endif
