#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src )
	: Enemy(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		return ;
	else if (_hp - damage < 0)
		_hp = 0;
	else
		_hp -= damage;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */