#include "Human.hpp"

Human::Human()
{
}

Brain const	&Human::getBrain() const
{
	return (this->brain);
}

std::string	Human::identify() const
{
	return (this->brain.identify());
}
