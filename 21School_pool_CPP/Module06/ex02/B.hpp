/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:30:07 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:32:43 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B: public Base {
public:
	B();	
	
	B(const B &other);
	B & operator=(const B &other);
	
	~B();
};

#endif
