/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 08:27:49 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 13:24:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	std::cout<<"That's the end of the world!"<<std::endl;

	ZombieHorde *sras = new ZombieHorde(3, "first generation");
	sras->announce();

	ZombieHorde *covid19 = new ZombieHorde(7, "second generation");
	covid19->announce();

	delete sras;
	delete covid19;
	return (EXIT_SUCCESS);
}