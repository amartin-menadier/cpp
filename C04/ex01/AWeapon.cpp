#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AWeapon::getName() const
{
	return (_name);
}

int			AWeapon::getAPCost() const
{
	return (_apcost);
}

int			AWeapon::getDamage() const
{
	return (_damage);
}



/* ************************************************************************** */