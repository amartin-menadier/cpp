#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	
}

Peon::Peon( const Peon & src ) : Victim(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Peon const & i )
{
	o << "I'm " << i.get_name() << " and I like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */