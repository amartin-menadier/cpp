#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );

		std::string		getTarget() const;
		void			execute(Bureaucrat const & executor) const;

	private:
		std::string		_target;
		RobotomyRequestForm();

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */