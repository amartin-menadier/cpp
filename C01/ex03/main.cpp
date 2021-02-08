/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 08:27:49 by user42            #+#    #+#             */
/*   Updated: 2021/02/03 23:44:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	std::cout<<"That's the end of the world!"<<std::endl;

	ZombieHorde *first = new ZombieHorde(3, "first generation");
	first->announce();

	ZombieHorde *second = new ZombieHorde(7, "second generation");
	second->announce();

	delete first;
	delete second;
	return (EXIT_SUCCESS);
}