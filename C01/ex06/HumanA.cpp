/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:30:56 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 21:39:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string c_name, Weapon &c_weapon)
: name(c_name), weapon(c_weapon)
{
	return ;
}

void	HumanA::attack(void) const
{
	if (this->weapon.getType().compare("crude spiked club"))
		std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}