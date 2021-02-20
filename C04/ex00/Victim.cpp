#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim()
{
}

Victim::Victim(std::string name)
	: _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim( const Victim & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	
	o << "I'm " << i.get_name() << " and I like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Victim::get_name() const
{
	return (_name);
}


/* ************************************************************************** */



