/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 23:11:38 by resther           #+#    #+#             */
/*   Updated: 2021/01/21 12:28:25 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>

class Human
{
private:
	void	meleeAttack(std::string const& target);
	void	rangedAttack(std::string const& target);
	void	intimidatingShout(std::string const& target);

public:
	void	action(std::string const& action_name, std::string const& target);
};
#endif