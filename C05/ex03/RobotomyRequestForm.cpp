#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: RobotomyRequestForm(src.getTarget())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "*drrrriiii brrrrppp brrpp drrrrooo* " << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully";
	else
		std::cout << "Failure. " << _target << " could not be robotomized";
	std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		RobotomyRequestForm::getTarget() const
{
	return (_target);
}

/* ************************************************************************** */
