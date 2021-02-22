#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure & src ) : AMateria("cure")
{
	_xp = src.getXP();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & other )
{
	_xp = other.getXP();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Cure::getType() const
{
	return (_type);
}

unsigned int Cure::getXP() const
{
	return (_xp);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}


/* ************************************************************************** */
