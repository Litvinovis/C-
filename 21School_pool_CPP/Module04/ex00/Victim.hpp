/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:40:43 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 18:06:55 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class	Victim {
protected:
	std::string	_Name;

private:
	Victim();

public:
	Victim(std::string name);
	Victim(const Victim &obj);

	std::string		getName(void) const;
	std::string		getTitle(void) const;
	virtual void	getPolymorphed(void) const;

	Victim & operator=(const Victim &obj);

	virtual ~Victim();
};

std::ostream &	operator << (std::ostream &out, const Victim &obj);

#endif