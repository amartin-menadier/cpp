#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}


PlasmaRifle::PlasmaRifle( const PlasmaRifle & src ) : AWeapon(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	_name = rhs.getName();
	_apcost = rhs.getAPCost();
	_damage = rhs.getDamage();
	return (*this);
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */