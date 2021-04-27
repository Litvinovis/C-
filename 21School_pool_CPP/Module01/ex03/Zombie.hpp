/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:58:25 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:23:44 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <ctime>

class Zombie {
public:
	Zombie(void);
	~Zombie();
	void		announce();

private:
	std::string zname;
	std::string ztype;	
};

#endif