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