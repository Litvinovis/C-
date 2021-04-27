/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:49:40 by resther           #+#    #+#             */
/*   Updated: 2021/01/22 13:49:21 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(): _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
	this->_n = i << _bit; 
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
	this->_n = roundf(f * (1 << _bit));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)  {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_n / (1 << this->_bit));
}

int		Fixed::toInt(void) const {
	return (this->_n >> _bit);
}

int	Fixed::getRawBits(void) const {
	return this->_n;
}

void	Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

Fixed &	Fixed::operator=(const Fixed & smthg) {
	std::cout << "Assignation operator called" << std::endl;
	this->_n = smthg.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& i) {
	out << i.toFloat();
	return out;
}