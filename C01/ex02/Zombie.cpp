/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:42:39 by user42            #+#    #+#             */
/*   Updated: 2021/01/04 15:08:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce() const{
	
	std::cout	<< "<" << this->name << " (" << this->type << ")"
				<< "> Braiiinnnss..." <<std::endl;
}

Zombie::Zombie(std::string name, std::string type) : type(type), name(name) 
{
	Zombie::announce();
}

Zombie::~Zombie()
{
		std::cout	<< "<" << this->name << " (" << this->type << ")"
				<< "> DEAD" <<std::endl;
}