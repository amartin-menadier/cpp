/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:19:50 by user42            #+#    #+#             */
/*   Updated: 2021/01/04 15:08:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie stack_dead_guy = Zombie("Jean-Louis", "stack generation");

	ZombieEvent first_byte = ZombieEvent();
	first_byte.setZombieType("heap generation");
	Zombie *heap_dead_guy = first_byte.randomChump();
	delete heap_dead_guy;
	
	return (0);
}