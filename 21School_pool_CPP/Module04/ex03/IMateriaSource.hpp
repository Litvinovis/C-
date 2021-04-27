/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:44:08 by resther           #+#    #+#             */
/*   Updated: 2021/01/25 16:45:30 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class	IMateriaSource {
public:
	virtual void	learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
	virtual	~IMateriaSource() {}
};

#endif
