#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist( const PowerFist & src ) : AWeapon(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &				PowerFist::operator=( PowerFist const & rhs )
{
	_name = rhs.getName();
	_apcost = rhs.getAPCost();
	_damage = rhs.getDamage();
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */