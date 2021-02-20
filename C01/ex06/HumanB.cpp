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