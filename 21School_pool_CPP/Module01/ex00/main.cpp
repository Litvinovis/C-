/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:05:01 by resther           #+#    #+#             */
/*   Updated: 2021/01/07 17:44:02 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack() 
{
    Pony littlehorse("StackPony", 3);
    littlehorse.jump();
}

void ponyOntheHeap() {
    Pony *littlehorse = new Pony("HeapPony", 5);
    littlehorse->jump();
    delete littlehorse;
}

int main() {
    ponyOntheHeap();
    ponyOnTheStack();
    return (0);
}