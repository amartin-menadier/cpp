#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_deposit[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i = 0; i < 4; i++)
	{
		if (src._deposit[i])
			_deposit[i] = src._deposit[i]->clone();
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_deposit[i])
			delete _deposit[i];
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &		MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i(0); i < 4 ; i++)
		{
			if (_deposit[i])
				delete (_deposit[i]);
			_deposit[i] = NULL;
			if (rhs._deposit[i])
				_deposit[i] = rhs._deposit[i]->clone();
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		MateriaSource::learnMateria(AMateria* src)
{
	int i(0);

	while (i < 4 && _deposit[i])
		i++;
	if (i < 4)
		_deposit[i] = src->clone();
//	delete (src); //uncomment to use 42's main or leak... plop... plop...
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 3; i >= 0; i--)
	{
		if (_deposit[i] && _deposit[i]->getType() == type)
			return (_deposit[i]->clone());
	}
	return (NULL);
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */