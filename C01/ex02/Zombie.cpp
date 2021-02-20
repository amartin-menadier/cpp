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
