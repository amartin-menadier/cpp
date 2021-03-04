#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int N)
	: _storage(std::vector<int>()), _N(N), _saved(0)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		_N = rhs._N;
		_saved = rhs._saved;
		_storage = rhs._storage;
	}
	return *this;
}

std::vector<int>	Span::getStorage() const
{
	return _storage;
}

std::ostream &			operator<<( std::ostream & o, Span & i )
{
	std::vector<int> toDisplay = i.getStorage();
	std::vector<int>::const_iterator it;
	for (it = toDisplay.begin(); it != toDisplay.end(); it++)
		std::cout << *it << "; ";
	std::cout << std::endl;
	std::cout << "Shortest span is: " << i.shortestSpan() << std::endl;
	std::cout << " Longest span is: " << i.longestSpan()  << std::endl;	
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Span::FullContainer::what() const throw()
{
	return "container is full";
}

const char *Span::NoSpan::what() const throw()
{
	return "there is no or only one element stored, no span can be calculated";
}

const char *Span::RangeTooBig::what() const throw()
{
	return "Bad use of addManyNumbers";
}

void	Span::addNumber(int i)
{
	if (_saved == _N)
		throw FullContainer();
	_storage.push_back(i);
	_saved++;
}

int	Span::shortestSpan()
{
	if (_saved < 2)
		throw NoSpan();
	std::sort(_storage.begin(), _storage.end());
	std::vector<unsigned int> spans;
	std::vector<int>::const_iterator i;
	for (i = _storage.begin(); i + 1 != _storage.end(); i++)
		spans.push_back(abs(*i - *(i + 1)));
	return (*std::min_element(spans.begin(), (spans.end() - 1)));
}

int	Span::longestSpan()
{
	if (_saved < 2)
		throw NoSpan();
	std::sort(_storage.begin(), _storage.end());
	return (*(_storage.end()  - 1)- *_storage.begin());
}

void	Span::addManyNumbers(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end)
{
	std::vector<int>::const_iterator begin = start;
	for (start = begin; start != end; start++)
		addNumber(*start);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */