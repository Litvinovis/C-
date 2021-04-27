/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:59:08 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 11:41:19 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>
# include <iterator>

class Span {
private:
	std::vector<int>	nbrs;
	unsigned int		N;

	Span();
public:
	Span(unsigned int N);
	Span(Span const &other);
	
	class AddException : public std::exception
	{
		const char* what() const throw();
	};
	class NoFoundException : public std::exception
	{
		const char* what() const throw();
	};

	void	addNumber(int nbr);
	void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan(void);
	int		longestSpan(void);
	
	Span & operator=(Span const &other);

	~Span();
};

#endif