/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:59:00 by resther           #+#    #+#             */
/*   Updated: 2021/02/09 17:33:41 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >

// void print( T & x ) { std::cout << x << std::endl; return; }

// int main() {
// 	int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return 0;
// }

int		main(void)
{
	char 		array_1[15] = "ABCDEFGabcdefg";
	std::string array_2[3] = {"Vault", "Progress", "Genom"};
	int			array_3[5] = {0, -221, 7, 548, 722};

	std::cout << std::endl << std::string(15, ' ') << "1 array iter:" << std::endl << std::endl;
	::iter(array_1, 14, ::print_array);
	std::cout << std::endl << std::string(15, ' ') << "2 array iter:" << std::endl << std::endl;
	::iter(array_2, 3, ::print_array);
	std::cout << std::endl << std::string(15, ' ') << "3 array iter:" << std::endl << std::endl;
	::iter(array_3, 5, ::print_array);
	std::cout << std::endl;

	return (0);
}