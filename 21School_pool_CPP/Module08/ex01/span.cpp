/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:54:47 by resther           #+#    #+#             */
/*   Updated: 2021/02/10 11:42:50 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {
}

Span::Span(unsigned int N) {
	this->N = N;
}

Span::Span(Span const &other) {
	this->nbrs = other.nbrs;
	this->N = other.N;
}

const char* Span::AddException::what() const throw() {
	return ("Error: Full memory, can't add");
}

const char* Span::NoFoundException::what() const throw() {
	return ("Error: Empty array, or juct one element");
}

void Span::addNumber(int nbr) {
	if (this->nbrs.size() >= this->N)
		throw Span::AddException();
	this->nbrs.push_back(nbr);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	for(std::vector<int>::iterator it = begin; it != end; ++it)
	{
		if (this->nbrs.size() >= this->N)
			throw Span::AddException();
		this->nbrs.push_back(*it);
	}
}

int	Span::shortestSpan(void) {
	std::vector<int>::iterator first;
	std::vector<int>::iterator second;
	int min;
	
	if (this->nbrs.size() == 1 || this->nbrs.empty())
		throw Span::NoFoundException();
	std::sort(this->nbrs.begin(), this->nbrs.end());
	first = this->nbrs.begin();
	second = first + 1;
	min = *second - *first;

	return (min);
}

int	Span::longestSpan(void) {
	std::vector<int>::iterator first;
	std::vector<int>::iterator second;
	int max;
	
	if (this->nbrs.size() == 1 || this->nbrs.empty())
		throw Span::NoFoundException();
	std::sort(this->nbrs.begin(), this->nbrs.end());
	first = this->nbrs.begin();
	second = this->nbrs.end() - 1;
	max = *second - *first;

	return (max);
}

Span &Span::operator=(Span const &other) {
	if (this == &other)
		return (*this);
	this->nbrs = other.nbrs;
	this->N = other.N;
	return (*this);
}

Span::~Span() {
}