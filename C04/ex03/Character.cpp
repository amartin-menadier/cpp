#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	_name = rhs.getName();
	if ( this != &rhs )
	{
		for (int i(0); i < 4 ; i++)
		{
			if (_inventory[i])
				delete (_inventory[i]);
			_inventory[i] = NULL;
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}


std::ostream &		operator<<(std::ostream & o, Character const & character)
{

		o << character.getName() << "'s inventory: " << std::endl;
		for (int i = 0; i < 4 ; i++)
		{
			if (character.getMateria(i))
				o << "[" << i + 1 << "]: " << character.getMateria(i)->getType() << " XP: " << character.getMateria(i)->getXP() << std::endl;
			else 
				o << "[" << i + 1 << "]: empty" << std::endl;
		}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria* m)
{
	int	i(0);
	if (!m)
		return ;
	while (i < 4 && _inventory[i])
		i++;
	if (i < 4)
		_inventory[i] = m->clone();
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	else
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	else
		_inventory[idx]->use(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return (_name);
}

AMateria * Character::getMateria(int i) const
{
	return (_inventory[i]);
}

/* ************************************************************************** */



