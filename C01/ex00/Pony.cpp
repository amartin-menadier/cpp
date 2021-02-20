#include "Pony.hpp"

Pony::Pony(std::string given_name) : name(given_name)
{
	std::cout<<"A pony named " << this->name << " is born \\o/" <<std::endl;
}

Pony::~Pony()
{
	std::cout<<"A pony named " << this->name << " is dead :'(" <<std::endl;
}
