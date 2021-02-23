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
	return ("the bureaucrat's grade is too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("the bureaucrat's grade is too high");
}

void		Bureaucrat::signForm(Form & form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat " << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
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
