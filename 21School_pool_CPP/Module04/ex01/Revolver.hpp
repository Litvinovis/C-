/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Revolver.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:32:40 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:40:49 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVOLVER_HPP
# define REVOLVER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class Revolver: public AWeapon {
	void attack() const;

public:
	Revolver();
	Revolver(Revolver const &obj);

	Revolver & operator=(Revolver const &obj);

	virtual ~Revolver();
};


#endif
