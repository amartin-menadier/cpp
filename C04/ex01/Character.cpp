#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() 
{
}

Character::Character(std::string const & name)
	: _name(name), _actionPoints(40), _weapon(NULL)
{
}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_weapon = rhs.getWeapon();
		this->_actionPoints = rhs.getActionPoints();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (i.getWeapon())
		o << i.getName() << " has " << i.getActionPoints() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getActionPoints() << " AP and is unarmed" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::recoverAP()
{
	_actionPoints += 10;
	if (_actionPoints > 40)
		_actionPoints = 40;
}

void	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (_actionPoints - _weapon->getAPCost() < 0 || !_weapon)
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_actionPoints -= _weapon->getAPCost();
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() < 0)
	{
		delete (enemy);
		enemy = NULL;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Character::getName() const
{
	return (_name);
}

int				Character::getActionPoints() const
{
	return (_actionPoints);
}

AWeapon			*Character::getWeapon() const
{
	return (_weapon);
}

/* ************************************************************************** */