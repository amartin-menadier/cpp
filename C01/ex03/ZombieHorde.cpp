/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 08:27:59 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 11:48:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void ZombieHorde::announce() const
{
	
}

std::string randomName(int i)
{
	srand(time(NULL) + i);
	std::string names[] = {"Rick Grimes", "Shane Walsh", "Lori Grimes", "Andrea", "Dale Horvath", "Glenn Rhee", "Carl Grimes", "Daryl Dixon", "Carol Peletier", "Maggie Greene", "Michonne"};
	
	return (names[rand() % 11]);
}

ZombieHorde::ZombieHorde(int n, std::string type) : type(type)
{
	std::cout	<<"A new Zombie Horde (" << this->type << ", "
				<< n << " members) has risen from the deads"
				<<std::endl;
	this->horde = new Zombie[n];
	int i (0);
	while (i < n)
	{
		this->horde[i].setname(randomName(i));
		this->horde[i].settype(this->type);
		this->horde[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
	std::cout<<"The "<< this->type << " type zombie horde died" <<std::endl;
}
