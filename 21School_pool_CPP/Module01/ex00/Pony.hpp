/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:04:42 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 17:43:35 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony { 
public:
	Pony(std::string pname, int page);
	void        jump();		
	~Pony();
	
private:
    std::string name;
    int         age;
};

#endif