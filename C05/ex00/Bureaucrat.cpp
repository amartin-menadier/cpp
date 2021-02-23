#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
: _name("no name"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name)
: _name(name), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
	: _name(src.getName()), _grade(src.getGrade())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << ": It was a pleasure working for you sir! <3" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::promotion()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException(); 
	std::cout << _name << " got promoted! Congratulations!" << std::endl;
	_grade--;
}

void	Bureaucrat::demotion()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << _name << " did a bad job and got demoted" << std::endl;
	_grade++;
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is to low. It can not be lower than 150");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high. It can not be higher than 1");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Bureaucrat::getName() const
{
	return (_name);
}

int				Bureaucrat::getGrade() const
{
	return (_grade);
}

/* ************************************************************************** */