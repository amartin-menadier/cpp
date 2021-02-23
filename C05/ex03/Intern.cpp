#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &		Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::createPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

Intern::formCreationInstructions Intern::Instructions[3] = 
{
	{"shrubbery creation", createShrubberyCreationForm},
	{"robotomy request", createRobotomyRequestForm},
	{"presidential pardon", createPresidentialPardonForm},
};

Form			*Intern::makeForm(std::string formName, std::string target)
{
	 for (int i = 0; i < 3; i++)
    {
        if (Instructions[i].formName == formName)
        {
            std::cout << "Intern creates a " << formName << " form!" << std::endl;
            return Instructions[i].fonction(target);
        }
    }
    std::cout << "Intern was given the instruction to create a form he does not know... Better tell him to make coffee..." << std::endl;
    return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */