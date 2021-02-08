/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:42:39 by user42            #+#    #+#             */
/*   Updated: 2021/02/03 23:10:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
		std::cout	<< "<" << this->name << " (" << this->type << ")"
				<< "> was deleted..." <<std::endl;
}

void	Zombie::announce() const{
	
	std::cout	<< "<" << this->name << " (" << this->type << ")"
				<< "> rose from the dead..." <<std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void	Zombie::settype(std::string type)
{
	this->type = type;
}
