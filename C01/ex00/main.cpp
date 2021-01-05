/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:43:53 by user42            #+#    #+#             */
/*   Updated: 2021/01/04 10:25:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	PonyOnTheHeap(std::string name)
{
	std::cout<<"A pony is about to be born on the Heap"<<std::endl;

	Pony	*OnTheHeap = new Pony(name);
	delete OnTheHeap;
}

void	PonyOnTheStack(std::string name)
{
	std::cout<<"A pony is about to be born on the Stack"<<std::endl;

	Pony	OnTheStack = Pony(name);
}

int		main (void)
{
	PonyOnTheStack("Jean-Jacques ONTHESTACK");
	PonyOnTheHeap("Jean-Philippe ONTHEHEAP");
	
	return (0);
}
