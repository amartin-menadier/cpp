/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:31:48 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 21:38:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string c_name) : name(c_name)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (this->weapon->getType().compare("crude spiked club"))
		std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}