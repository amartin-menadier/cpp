#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form (std::string name, int signingGrade, int executingGrade)
	: _name(name), _signed(0), _signingGrade(signingGrade), _executingGrade(executingGrade)
{
	if (_signingGrade < 1 || _executingGrade < 1)
		throw GradeTooHighException();
	if (_signingGrade > 150 || _executingGrade > 150)
		throw GradeTooLowException();
}

Form::Form( const Form & src ):
	_name(src.getName()), _signed(src.getSignatureStatus()), _signingGrade(src.getSigningGrade()), _executingGrade(src.getExecutingGrade())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "*krrrkckkrkkrkkckkr* Form " << _name << " has been shredded" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		_signed = rhs.getSignatureStatus();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " requires:" << std::endl << "- a " << i.getSigningGrade() << " grade to be signed;" << std::endl << "- a " << i.getExecutingGrade() << " grade to be executed;" << std::endl;
	if (i.getSignatureStatus())
		o << "It has already been signed" << std::endl;
	else
		o << "It has not been signed yet" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


const char * Form::GradeTooLowException::what() const throw()
{
	return ("Form: executing or signin grade is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form : executing or signing grade is too high");
}

const char *Form::AlreadySigned::what() const throw()
{
	return ("the form is already signed");
}

void			Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > _signingGrade)
		throw Bureaucrat::GradeTooLowException();
	else if (_signed)
		throw AlreadySigned();
	else
	{
		std::cout << bureaucrat.getName() << " signs form " << this->getName() <<  std::endl;
		_signed = true;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Form::getName() const
{
	return (_name);
}

bool			Form::getSignatureStatus() const
{
	return (_signed);
}

int				Form::getSigningGrade() const
{
	return (_signingGrade);
}

int				Form::getExecutingGrade() const
{
	return (_executingGrade);
}

/* ************************************************************************** */

