#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("Presidential Pardon Form", 25, 5), _target(target)
{

}


PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : PresidentialPardonForm(src.getTarget())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		_target = rhs.getTarget();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

/* ************************************************************************** */





