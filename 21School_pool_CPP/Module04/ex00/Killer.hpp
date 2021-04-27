/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Killer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:12:27 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:05:47 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KILLER_HPP
# define KILLER_HPP

# include <iostream>
# include "Victim.hpp"

class	Killer : public Victim {
public:
	Killer(std::string name);
	Killer(const Killer &obj);

	void	getPolymorphed(void) const;

	Killer & operator=(const Killer &obj);

	virtual ~Killer();
};

#endif
