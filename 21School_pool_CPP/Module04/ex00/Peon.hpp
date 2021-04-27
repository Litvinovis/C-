/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:33:33 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 13:00:59 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class	Peon : public	Victim {
public:
	Peon(std::string name);
	Peon(const Peon &obj);

	void	getPolymorphed(void) const;

	Peon & operator=(const Peon &obj);

	virtual ~Peon();
};

#endif
