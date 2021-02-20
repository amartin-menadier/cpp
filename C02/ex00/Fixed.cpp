#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : m_rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & src )
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &src )
		m_rawBits = src.getRawBits();
	else
		std::cout << "Assignation operator failed (self copy)" << std::endl;
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	//o << "Value = " << i.getValue();

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSORS --------------------------------
*/

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_rawBits);
}

void Fixed::setRawBits( int const raw )
{
	this->m_rawBits = raw;
}


/* ************************************************************************** */
