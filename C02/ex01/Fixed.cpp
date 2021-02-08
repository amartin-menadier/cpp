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
//	m_rawBits = src.getRawBits();
}

Fixed::Fixed( const int integer )
{
	std::cout << "Int constructor called" << std::endl;
	m_rawBits = integer << m_bits_count;
}

Fixed::Fixed( const float FloatingPoint )
{
	std::cout << "Float constructor called" << std::endl;
	m_rawBits = roundf(FloatingPoint * (1 << m_bits_count));
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

Fixed &			Fixed::operator=( Fixed const & rhs )
{

	std::cout << "Assignation operator called" << std::endl;
	m_rawBits = rhs.getRawBits();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat( void ) const
{
	float	dst;

	dst = (float)m_rawBits / (1 << m_bits_count);
	return (dst);
}

int Fixed::toInt( void ) const
{
	int		dst;

	dst = m_rawBits / (1 << m_bits_count);
	return (dst);
}; 

/*
** --------------------------------- ACCESSORS --------------------------------
*/

int Fixed::getRawBits( void ) const
{
	return (m_rawBits);
}

void Fixed::setRawBits( int const raw )
{
	m_rawBits = raw;
}


/* ************************************************************************** */
