#include "Brain.hpp"

Brain::Brain()
{
	
}

std::string Brain::identify() const
{
	std::ostringstream buf;

	buf << this;
	
	return (buf.str());
}
