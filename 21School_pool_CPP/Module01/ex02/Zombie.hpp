/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:35:44 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:22:57 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <string>

class Zombie {
public:
	Zombie(std::string type, std::string name);
	~Zombie();
	void		announce();

private:
	std::string zname;
	std::string ztype;	
};

#endif