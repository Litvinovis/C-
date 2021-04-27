/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:33:22 by resther           #+#    #+#             */
/*   Updated: 2021/02/09 11:14:11 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// class Awesome {
// public:
// 	Awesome(int n) : _n( n ) {}
// 	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 	int _n;
// };

// std::ostream & operator<<(std::ostream &out, Awesome const &Awesome) { return (out << Awesome._n); }

int main( void ) {
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	
	// Awesome f(10);
	// Awesome g(15);
	
	// ::swap(f, g);
	// std::cout << "f = " << f << ", g = " << g << std::endl;
	// std::cout << "min(f, g) = " << ::min( f, g ) << std::endl;
	// std::cout << "max(f, g) = " << ::max( f, g ) << std::endl;
	
return (0);
}