#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
		this->_title = rhs.get_title();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.get_name() << ", " << i.get_title() << ", and I like ponies!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Sorcerer::get_name() const
{
	return (_name);
}

std::string	Sorcerer::get_title() const
{
	return (_title);
}

/* ************************************************************************** */

