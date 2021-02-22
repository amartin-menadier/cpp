#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
}

AMateria::AMateria( const AMateria & src )
{
	_type = src.getType();
	_xp = src.getXP();
}

AMateria::AMateria(std::string const & type)
	: _type(type), _xp(0)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if (_type != rhs.getType())
		std::cout << "You can't assign a materia to another matiera with different type" << std::endl;
	else if ( this != &rhs )
		_xp = rhs.getXP();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		AMateria::use(ICharacter& target)
{
	(void) target;
	_xp += 10;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}


/* ************************************************************************** */