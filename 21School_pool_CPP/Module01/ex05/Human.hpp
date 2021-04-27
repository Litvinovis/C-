/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:39:10 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 23:24:33 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>
# include <iostream>

class Human {
public:
	Human();
	~Human();
	const Brain	&getBrain() const;
	std::string	identify() const;	
	
private:
	const Brain _brain;
};

#endif