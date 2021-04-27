/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Witness.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:09:24 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 19:05:06 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WITNESS_HPP
# define WITNESS_HPP

# include <iostream>
# include "Victim.hpp"

class	Witness : public	Victim {
public:
	Witness(std::string name);
	Witness(const Witness &obj);

	void	getPolymorphed(void) const;

	Witness & operator=(const Witness &obj);

	virtual ~Witness();
};

#endif
