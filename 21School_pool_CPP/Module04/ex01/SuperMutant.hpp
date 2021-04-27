/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:15:22 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:41:00 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy {
public:
	SuperMutant();
	SuperMutant(SuperMutant const &obj);
	virtual void takeDamage(int points);

	SuperMutant & operator=(SuperMutant const &obj);

	virtual ~SuperMutant();
};


#endif
