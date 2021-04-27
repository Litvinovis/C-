/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:52:01 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 12:04:20 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <string>
# include <deque>

template<class T>
class MutantStack: public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {
	};
	
	MutantStack(const MutantStack &other) {
		*this = other;
	};
	
	MutantStack		&operator=(const MutantStack &other) {
		if (this == &other)
			return (*this);
		std::stack<T>::operator=(other);
		return (*this);
	};

	typedef typename std::stack<T>::container_type container_type;
	typedef typename container_type::iterator iterator;

	iterator		begin() {
		return (this->c.begin());
	};
	iterator		end() {
		return (this->c.end());
	};
	
	~MutantStack() {
	};
};

#endif