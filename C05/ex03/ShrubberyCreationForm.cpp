#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )	: ShrubberyCreationForm(src.getTarget())
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	
	std::string		filename;
	std::ofstream	shrubbery;

	filename = _target + "_shrubbery";
	shrubbery.open(filename, std::ios::out | std::ios::trunc);
	if (shrubbery.is_open())
	{
		shrubbery << TREE1 << std::endl;
		shrubbery << TREE2 << std::endl;
		shrubbery << TREE3 << std::endl;
		shrubbery.close();
	}
	else
		std::cerr << "Error : Failed to create the schrubbery file" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		ShrubberyCreationForm::getTarget() const
{
	return (_target);
}


/* ************************************************************************** */
