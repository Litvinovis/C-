/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:28:55 by resther           #+#    #+#             */
/*   Updated: 2021/02/08 17:32:15 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A: public Base {
public:
	A();	
	A(const A &other);
	
	A &operator=(const A &other);
	
	~A();
};

#endif
