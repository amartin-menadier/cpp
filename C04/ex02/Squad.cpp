#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
	: _armySize(0), _army(NULL)
{
	std::cout << "Squad created" << std::endl;
}

Squad::Squad( const Squad & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	this->destroySquad();
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	if (this != &rhs)
	{
		this->destroySquad();
		_armySize = rhs.getCount();
		_army = new ISpaceMarine*[_armySize];
		int i(0);
		while (i < _armySize)
		{
			_army[i] = rhs.getUnit(i)->clone();
			i++;
		}
	}
	return *this;
}

/*
Squad	&Squad::operator=(Squad const &src)
{
	if (_army)
	{
		for (int i = 0; i < _armySize; i++)
			delete _army[i];
		delete [] _army;
	}
	_armySize = 0;
	_army = NULL;
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	return (*this);
}
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

int				Squad::marineIsPresent(ISpaceMarine *unit) const
{
	int i(0);

	while (_army && i < _armySize)
	{
		if (_army[i] == unit)
			return (1);
		i++;
	}
	return (0);
}

ISpaceMarine			**Squad::armyCopy(ISpaceMarine **dst) const
{
	int i(0);

	while(i < _armySize)
	{
		dst[i] = _army[i];
		i++;
	}
	return (dst);
}

int				Squad::push(ISpaceMarine* newUnit)
{
	if (newUnit && !_army)
	{
		_army = new ISpaceMarine*[1];
		_army[0] = newUnit;
		_armySize++;
	}
	else if (newUnit && !this->marineIsPresent(newUnit))
	{
		ISpaceMarine **tmp = new ISpaceMarine*[_armySize + 1];
		tmp = this->armyCopy(tmp);
		tmp[_armySize] = newUnit;
		delete [] _army;
		_army = tmp;
		_armySize++;	
	}
	return (_armySize);
}

void			Squad::destroySquad()
{
	if (_army && _armySize)
	{
		int	i(0);
		while (i < _armySize)
		{
			delete _army[i];
			_army[i] = NULL;
			i++;
		}
		delete [] _army;
		_army = NULL;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int			Squad::get_armySize() const
{
	return (_armySize);
}

int				Squad::getCount() const
{
	return (_armySize);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n >= _armySize)
		return (NULL);
	else
		return (_army[n]); 
}

/* ************************************************************************** */



