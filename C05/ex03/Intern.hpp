#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &	operator=( Intern const & rhs );
		Form		*makeForm(std::string formName, std::string target);

	private:
		struct formCreationInstructions
		{
			std::string		formName;
			Form			*(*fonction)(std::string target);
		};

		static formCreationInstructions Instructions[3];

		static Form *createPresidentialPardonForm(std::string target);
		static Form *createRobotomyRequestForm(std::string target);
		static Form *createShrubberyCreationForm(std::string target);

};


#endif /* ********************************************************** INTERN_H */