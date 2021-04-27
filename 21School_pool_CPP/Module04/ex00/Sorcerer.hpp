/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:44:00 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:05:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class	Sorcerer {
	std::string	_Name;
	std::string	_Title;

private:
	Sorcerer();

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &obj);

	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(Victim const &) const;

	Sorcerer &	operator=(const Sorcerer &obj);

	~Sorcerer();
};

std::ostream &	operator << (std::ostream &out, const Sorcerer &a);

#endif
