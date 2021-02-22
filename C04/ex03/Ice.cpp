#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & src ) : AMateria("ice")
{
	_xp = src.getXP();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & other )
{
	_xp = other.getXP();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Ice::getType() const
{
	return (_type);
}

unsigned int Ice::getXP() const
{
	return (_xp);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}


/* ************************************************************************** */
