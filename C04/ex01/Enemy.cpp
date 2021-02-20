#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type)
	: _hp(hp), _type(type)
{
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
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

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else
		_hp -= damage;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Enemy::getType() const
{
	return (_type);
}

int				Enemy::getHP() const
{
	return (_hp);
}

/* ************************************************************************** */