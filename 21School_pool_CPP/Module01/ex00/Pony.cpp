/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:04:20 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 17:44:44 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string pname, int page) : name(pname), age(page) {
    std::cout << "Pony " << pname << " born!" << " It is " << page << " years old!" << std::endl;   
}

void Pony::jump() {
    std::cout << "Pony " << name << " jump!" << " It is " << age << " years old!" << std::endl;
}
    
Pony::~Pony() {
    std::cout << "Pony " << name << " is die!" << " It is " << age << " years old!" << std::endl;   
}